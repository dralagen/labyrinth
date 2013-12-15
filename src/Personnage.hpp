/**
 * \file Personnage.hpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */
#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include <string>
#include <iostream>

#include "Equipement.hpp"
#include "Arme.hpp"
#include "ItemFactory.hpp"
#include "ColorTerm.hpp"

/**
 * \class Personnage
 * \brief Gestion du Personnage
 */
class Personnage
{
	private :
		const std::string nom_; ///< Initialisation du nom du personnage
		const int initVieMax_;  ///< Initialisation de la vie max du personnage
		const int initChance_;  ///< Initialisation de la chance du personnage
		const int initForce_;   ///< Initialisation de la force du personnage
		const int initDegat_;   ///< Initialisation des dégâts du personnage
		const int initArmure_;  ///< Initialisation de l'amure du personnage

		int vieMax_;            ///< Vie max du personnage
		int vie_;               ///< Vie du personnage
		int chance_;            ///< Chance du personnage
		int force_;             ///< Force du personnage
		int degat_;             ///< Dégâts du personnage
		int armure_;            ///< Armure du personnage
		Equipement *casque_;    ///< Emplacement de casque du personnage
		Equipement *torse_;     ///< Emplacement du torse du personnage
		Equipement *jambe_;     ///< Emplacement des jambes du personnage
		Arme *arme_;            ///< Emplacement de l'arme du personnage

		bool uptoday_;          ///< Booleen pour l'actualisation des statistiques du Personnage

	public:
		Personnage(std::string nom);
		~Personnage();
		/**
		 *\brief Modifie la vie du personnage
		 *\param vie Entier positif ou negatif, vie à ajouter
		 * */
		void modifierVie(int vie);
		/**
		 *\brief Modifie la force du personnage
		 *\param f Entier positif ou negatif, force à ajouter
		 * */
		void modifierForce(int f);
		/**
		 *\brief Modifie la chance du personnage
		 *\param c Entier positif ou negatif, chance à ajouter
		 * */
		void modifierChance(int c);
		/**
		 *\brief Actualisation des stats du personnage selon son équipement
		 * */
		void actuStat();
		/**
		 *\brief Affichage des stats du personnage
		 * */
		void afficheStat();
		/**
		 *\brief Affichage de l'équipement du personnage
		 * */
		void afficheEquip();
		/**
		 *\brief Nom du personnage
		 *\return nom Retourne le nom du personnage
		 * */
		std::string getNom();
		 /**
		 *\brief Vie du personnage
		 *\return vie Retourne la vie du personnage
		 * */
		int getVie();
		 /**
		 *\brief Vie max du personnage
		 *\return vieMax Retourne la vie max du personnage
		 * */
		int getVieMax();
		/**
		 *\brief Chance du personnage
		 *\return chance Retourne la chance du personnage
		 * */
		int getChance();
		/**
		 *\brief Force du personnage
		 *\return force Retourne la force du personnage
		 * */
		int getForce();
		/**
		 *\brief Equipe un équipement au personnage
		 *\param e Equipement à équiper au personnage
		 * */
		void setEquipement(Equipement *e);
		/**
		 *\brief Equipe un casque au personnage
		 *\param casque Casque à équiper au personnage
		 * */
		void setCasque(Equipement *casque);
		/**
		 *\brief Equipe un Torse au personnage
		 *\param torse Torse à équiper au personnage
		 * */
		void setTorse(Equipement *torse);
		/**
		 *\brief Equipe des Jambes au personnage
		 *\param jambe Jambe à équiper au personnage
		 * */
		void setJambe(Equipement *jambe);
		/**
		 *\brief Equipe une arme au personnage
		 *\param arme Arme à équiper au personnage
		 * */
		void setArme(Arme *arme);
		/**
		 *\brief Casque du personnage
		 *\return casque Casque équipé sur le personnage
		 * */
		Equipement* getCasque();
		/**
		 *\brief Torse du personnage
		 *\return torse Torse équipé sur le personnage
		 * */
		Equipement* getTorse();
		/**
		 *\brief Jambe du personnage
		 *\return jambe Jambe équipé sur le personnage
		 * */
		Equipement* getJambe();
		/**
		 * \brief Compte le nombre d'équipement que possède le personnage
		 * \return nombre d'équipement du personnage
		 */
		int getNbEquip();

		/**
		 *\brief Arme du personnage
		 *\return arme Arme équipé sur le personnage
		 * */
		Arme* getArme();
		/**
		 * \brief Compte les arme du personnage
		 * \return nombre d'arme du personnage
		 */
		int getNbArme();
		/**
		 *\brief Propose au personnage d'équiper un Equipement
		 *\param e Equipement proposé
		 * */
		void trouverEquipement(Equipement * e);
		/**
		 *\brief Propose au personnage d'équiper une Arme
		 *\param a Arme proposée
		 * */
		void trouverArme(Arme * a);
		/**
		 *\brief Méthode qui calcule le nombre de dégâts à infliger au personnage
		 *\param pv Nombre de dégâts à infliger
		 *\return degat Dégâts réel après prise en compte de l'armure
		 * */
		int recoitDegat(int pv);
		/**
		 *\brief Méthode qui calcule le nombre de dégâts infligé par le personnage
		 *\return degat Dégâts aprés prise en compte des dégâts de la chance et de la force du personnage
		 * */
		int envoieDegat();
		/**
		 *\brief Test si le personnage est vivant
		 *\return bool Vrai si le personnage est toujours vivant
		 * */
		bool isAlive();
};

#endif /* Personnage.hpp */

