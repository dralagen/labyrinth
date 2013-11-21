#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP
#include <string>
#include <iostream>
#include "Equipement.hpp"
#include "Arme.hpp"

#include "ItemFactory.hpp"

class Personnage
{
	private :
		std::string nom_;
		int vieMax_;
		int vie_;
		int chance_;
		int force_;
		int armure_;
		Equipement *casque_;
		Equipement *torse_;
		Equipement *jambe_;
		Arme *arme_;
	public:
		Personnage(std::string nom);
		~Personnage();
		void modifierVie(int vie);
		void modifierForce(int f);
		void modifierChance(int c);
		void actuStat();
		void afficheStat();
		void afficheEquip();
		std::string getNom();
		int getVie();
		int getVieMax();
		int getChance();
		int getForce();
		void setCasque(Equipement *casque);
		void setTorse(Equipement *torse);
		void setJambe(Equipement *jambe);
		void setArme(Arme *arme);
		Equipement* getCasque();
		Equipement* getTorse();
		Equipement* getJambe();
		Arme* getArme();
		void trouverEquipement(Equipement * e);
		void trouverArme(Arme * a);

};

#endif /* Personnage.hpp */
