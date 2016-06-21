# TER M1 ISTR Université Paul Sabatier Toulouse France 2016

> Command of the simulation.
> 2 switches and 3 shuttles.
> Description : each time a shuttle arrives at a switch, the switch will position in the oposite direction depending on the previous position. Therefore, 2 consecutives shuttles won't take the same path.

## Authors
- __Bruno DATO__ -- bruno.dato.meneses@gmail.com
- __Abdellah ELGOURAIN__ -- elgourain@gmail.com
- __Evgeny SHULGA__ -- hlebovod@mail.ru

## TO DO

1. **In ~/ ... /Ligne_transitique_MONTRAC/ros_ws/src/commande/src :**

	- replace the file *main_commande.cpp* by *main_commande_2_Aiguillages.cpp*
	- rename *main_commande_2_Aiguillages.cpp* by *main_commande.cpp*


2. **In a terminal, launch roscore if you haven't done it yet**


3. **In a new terminal, in ~/ ... /Ligne_transitique_MONTRAC/ros_ws**

	- $ source devel/setup.bash	(only the first time you open the terminal)
	- $ catkin_make


4. **If you are using the real transport network, ignore this step. To run the simulation, in a new terminal, in ~/ ... /Ligne_transitique_MONTRAC**

	- $ ./simulation 2 4 6		(we use 3 shuttles for this command)
	- if the simulation doesn't lauch successfully try a second time before restarting all the steps


5. **If you are using the simulation, ignore this step. To run the real transport network, in a new terminal, in ~/ ... /Ligne_transitique_MONTRAC/ros_ws**

	- $ source devel/setup.bash	(only the first time you open the terminal)
	- $ 

6. **In a new terminal, in ~/ ... /Ligne_transitique_MONTRAC/ros_ws**

	- $ source devel/setup.bash	(only the first time you open the terminal)
	- $ rosrun commande run
	- once the simulation is detected :  SIMULATION ON and LIGNE TRANSITIQUE OFF
	- press play on the simulation	(try not to be too long)

	- if the shuttles don't stop on at the 2 initilization points, change the positions *12* and *24* respectively by *24* ant *12* in the fonction *Deplacer_navettes_2(STx,RxD,RxG,Vx,Dx,PIx,Actionneurs,12,24)* line 102, save and restart all the steps.




## License

[![CC0](https://licensebuttons.net/p/zero/1.0/88x31.png)](http://creativecommons.org/publicdomain/zero/1.0/)