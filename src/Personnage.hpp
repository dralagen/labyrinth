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
		const std::string nom_;
		const int initVieMax_;
		const int initChance_;
		const int initForce_;
		const int initDegat_;
		const int initArmure_;

		int vieMax_;
		int vie_;
		int chance_;
		int force_;
		int degat_;
		int armure_;
		Equipement *casque_;
		Equipement *torse_;
		Equipement *jambe_;
		Arme *arme_;

		bool uptoday_;
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
		void setEquipement(Equipement *e);
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
		int recoitDegat(int pv);
		int envoieDegat();
		bool isAlive();
};

#endif /* Personnage.hpp */

