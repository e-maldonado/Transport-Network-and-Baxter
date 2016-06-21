#include <ros/ros.h>
#include "communication_baxter.h"
#include "std_msgs/Bool.h"


// Constructeur
Communication_Baxter::Communication_Baxter(ros::NodeHandle noeud)
{
	// Publisher

	pub_prise_demandee_bras_droit = noeud.advertise<std_msgs::Bool>("/pont_BaxterLigneTransitique/right_arm/prise_demandee", 1);
	pub_prise_demandee_bras_gauche = noeud.advertise<std_msgs::Bool>("/pont_BaxterLigneTransitique/left_arm/prise_demandee", 1);
	
	// Subscriber

	sub_prise_effectuee_bras_droit = noeud.subscribe("/pont_BaxterLigneTransitique/right_arm/prise_effectuee", 1, &Communication_Baxter::Callback_prise_effectuee_bras_droit,this);
	sub_prise_effectuee_bras_gauche = noeud.subscribe("/pont_BaxterLigneTransitique/left_arm/prise_effectuee", 1, &Communication_Baxter::Callback_prise_effectuee_bras_gauche,this);

	msg_prise_demandee_bras_droit.data = false ;
	msg_prise_effectuee_bras_droit.data = false ;

	msg_prise_demandee_bras_gauche.data = false ;
	msg_prise_effectuee_bras_gauche.data = false ;


}


// Destructeur
Communication_Baxter::~Communication_Baxter()
{
}


void Communication_Baxter::Callback_prise_effectuee_bras_droit(const std_msgs::Bool& msg)
{
	msg_prise_effectuee_bras_droit = msg ;
	//std::cout<<msg<<std::endl;
}

void Communication_Baxter::Callback_prise_effectuee_bras_gauche(const std_msgs::Bool& msg)
{
	msg_prise_effectuee_bras_gauche = msg ;
	//std::cout<<msg<<std::endl;
}


bool Communication_Baxter::Prise_effectuee_bras_droit()
{
	if( msg_prise_effectuee_bras_droit.data == true )
	{
		msg_prise_effectuee_bras_droit.data = false ;
		msg_prise_demandee_bras_droit.data = false ;
		return true;
	}
	else return false ;
}

bool Communication_Baxter::Prise_effectuee_bras_gauche()
{
	if( msg_prise_effectuee_bras_gauche.data == true )
	{
		msg_prise_effectuee_bras_gauche.data = false ;
		msg_prise_demandee_bras_gauche.data = false ;
		return true;
	}
	else return false ;
}

void Communication_Baxter::Demander_prise_bras_droit()
{
	msg_prise_demandee_bras_droit.data = true ;
}

void Communication_Baxter::Demander_prise_bras_gauche()
{
	msg_prise_demandee_bras_gauche.data = true ;
}
	

void Communication_Baxter::Update()
{
	pub_prise_demandee_bras_droit.publish(msg_prise_demandee_bras_droit);
	pub_prise_demandee_bras_gauche.publish(msg_prise_demandee_bras_gauche);
}


