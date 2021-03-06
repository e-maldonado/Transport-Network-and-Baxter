#include "commande.h"
#include "actionneurs.h"
#include "commande.h"
#include <ros/ros.h>
#include <iostream>

using namespace std;

// Initialisation des capteurs pour le main
void Initialisation(bool PSx[],bool DxD[],bool DxG[],bool CPx[],bool CPIx[],bool STx[],bool RxD[],bool RxG[],bool Vx[],bool Dx[],bool PIx[])
{
	for(int i=0;i<25;i++) PSx[i]=0;
	for(int i=0;i<13;i++) DxD[i]=0;
	for(int i=0;i<13;i++) DxG[i]=0;
	for(int i=0;i<11;i++) CPx[i]=0;
	for(int i=0;i<9;i++) CPIx[i]=0;

	for(int i=0;i<25;i++) STx[i]=0;
	for(int i=0;i<13;i++) RxD[i]=0;
	for(int i=0;i<13;i++) RxG[i]=0;
	for(int i=0;i<13;i++) Vx[i]=0;
	for(int i=0;i<13;i++) Dx[i]=0;
	for(int i=0;i<9;i++) PIx[i]=0;
}

// Affichage des capteurs
void Afficher_capteurs(bool PSx[],bool DxD[],bool DxG[],bool CPx[],bool CPIx[])
{
	cout <<"~~~~~~ CAPTEURS ~~~~~~~~~"<<endl;
	for(int i=1;i<25;i++) {cout << "PS" << i << "=" <<PSx[i]<<"  ";}cout << endl;
	for(int i=1;i<13;i++) {cout << "D" << i << "D" << "=" <<DxD[i]<<"  ";}cout << endl;
	for(int i=1;i<13;i++) {cout << "D" << i << "G" << "=" <<DxG[i]<<"  ";}cout << endl;
	for(int i=1;i<11;i++) {cout << "CP" << i << "=" <<CPx[i]<<"  ";}cout << endl;
	for(int i=1;i<9;i++) {cout << "CPI" << i << "=" <<CPIx[i]<<"  ";}cout << endl;
	cout << endl;
}

// Affichage des actionneurs
void Afficher_actionneurs(bool STx[],bool RxD[],bool RxG[],bool Vx[],bool Dx[],bool PIx[])
{
	cout <<"~~~~~~ ACTIONNEURS ~~~~~~"<<endl;
	for(int i=1;i<25;i++) {cout << "ST" << i << "=" <<STx[i]<<"  ";} cout << endl;
	for(int i=1;i<13;i++) {cout << "R" << i << "D" << "=" <<RxD[i]<<"  ";} cout << endl;
	for(int i=1;i<13;i++) {cout << "R" << i << "G" << "=" <<RxG[i]<<"  ";} cout << endl;
	for(int i=1;i<13;i++) {cout << "V" << i << "=" <<Vx[i]<<"  ";} cout << endl;
	for(int i=1;i<13;i++) {cout << "D" << i << "=" <<Dx[i]<<"  ";} cout << endl;
	for(int i=1;i<9;i++) {cout << "PI" << i << "=" <<PIx[i]<<"  ";} cout << endl;
	cout<<endl;
	cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _  " <<endl<<endl;
}

// Affichage du marquage pour le RdP
void Afficher_marquage_RdP(int M[],int nombre_places)
{
	cout <<"~~~~~~ Marquage RdP ~~~~~"<<endl;
	for(int i=1;i<=nombre_places;i++) {cout << "M[" << i << "]=" <<M[i]<<"  ";}
	cout << endl << endl;
}

// Deplace toutes les navettes devant un stop pour l'initialisation de la simulation
void Deplacer_navettes(Actionneurs Actionneurs,bool STx[],bool RxD[],bool RxG[],bool Vx[],bool Dx[],bool PIx[],int numero_stop)
{
	for(int i=0;i<25;i++) STx[i]=0;
	for(int i=0;i<13;i++) Dx[i]=1;
	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(1000000);

	switch(numero_stop)
	{
		case 1 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 2 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 3 :	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 4 :	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1;RxG[1]=1; break;
		case 5 :	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 6 :	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 7 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 8 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 9 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 10 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 11 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1;RxG[5]=1; break;
		case 12 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 13 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 14 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 15 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 16 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1;RxG[7]=1; break;
		case 17 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 18 :	RxG[11]=1;RxG[12]=1;RxG[1]=1;RxG[2]=1; break;
		case 19 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 20 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 21 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 22 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
		case 23 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1;RxG[11]=1; break;
		case 24 : 	RxG[5]=1;RxG[6]=1;RxG[7]=1;RxG[8]=1; break;
	}
	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(4500000);

	for(int i=0;i<13;i++) Dx[i]=0;
	for(int i=0;i<13;i++) Vx[i]=1;

	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);

	for(int i=0;i<25;i++) STx[i]=1;
	STx[numero_stop]=0;
	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(35000000);

	for(int i=0;i<25;i++) STx[i]=0;
	for(int i=0;i<13;i++) RxD[i]=0;
	for(int i=0;i<13;i++) RxG[i]=0;
	for(int i=0;i<13;i++) Vx[i]=0;
	for(int i=0;i<13;i++) Dx[i]=0;
	for(int i=0;i<9;i++) PIx[i]=0;

	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
}

// Permet de mettre la simulation dans la m�me configuration que la ligne transitique
void Mode_ligne(Actionneurs Actionneurs,bool STx[],bool RxD[],bool RxG[],bool Vx[],bool Dx[],bool PIx[])
{
	Dx[3]=1;Dx[10]=1;
	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(500000);

	RxG[3]=1;RxG[10]=1;
	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(4000000);

	Dx[3]=0;Dx[10]=0;
	Vx[3]=1;Vx[10]=1;

	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(500000);

	RxG[3]=0;RxG[10]=0;
	Vx[3]=1;Vx[10]=1;STx[6]=1;
	Actionneurs.Envoyer(STx,RxD,RxG,Vx,Dx,PIx);
	usleep(500000);
}



