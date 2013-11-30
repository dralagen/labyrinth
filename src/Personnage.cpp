/**
 * \file Personnage.cpp
 *
 * \author Adrien Garandel & Alexis Ruchaud
 * \version 1.0
 * \date 27/11/2013
 */

#include "Personnage.hpp"

Personnage::Personnage(std::string nom):
	nom_(nom),
 	initVieMax_(100),
 	initChance_(10),
 	initForce_(20),
 	initDegat_(0),
 	initArmure_(0)
{
	vieMax_ = initVieMax_;
	vie_    = vieMax_;
	chance_ = initChance_;
	force_  = initForce_;
	degat_  = initDegat_;
	armure_ = initArmure_;
	casque_ = 0;
	torse_  = 0;
	jambe_  = 0;
	arme_   = 0;
	uptoday_ = true;
}

Personnage::~Personnage()
{
	delete casque_;
	delete torse_;
	delete jambe_;
	delete arme_;
}

void Personnage::modifierVie(int v)
{
	vie_ = vie_ + v;
	if(vie_ > vieMax_)
	{
		vie_ = vieMax_;
	}
	if(vie_ <= 0)
	{
		vie_ = 0;
		std::cout<< COLOR_DEAD "Vous êtes mort" COLOR_RESET<<std::endl;
	}
	Personnage::afficheStat();
}
void Personnage::modifierForce(int f)
{
	actuStat();
	force_ += f;
	if(force_ <= 0)
	{
		force_ = 0;
	}
	Personnage::afficheStat();
}
void Personnage::modifierChance(int c)
{
	actuStat();
	chance_ += c;
	if(chance_ <= 0)
	{
		chance_ = 0;
	}
	Personnage::afficheStat();
}

void Personnage::actuStat()
{
	if (!uptoday_) {
		vieMax_ = initVieMax_;
		chance_ = initChance_;
		force_  = initForce_;
		degat_  = initDegat_;
		armure_ = initArmure_;

		if(casque_)
		{
		armure_ += casque_->getArmure();
		vieMax_ += 2*casque_->getBvie();
		force_  += casque_->getBforce();
		chance_ += casque_->getBchance();
		}
		if(torse_)
		{
		armure_ += torse_->getArmure();
		vieMax_ += 2*torse_->getBvie();
		force_  += torse_->getBforce();
		chance_ += torse_->getBchance();
		}
		if(jambe_)
		{
		armure_ += jambe_->getArmure();
		vieMax_ += 2*jambe_->getBvie();
		force_  += jambe_->getBforce();
		chance_ += jambe_->getBchance();
		}
		if(arme_)
		{
		vieMax_ += 2*arme_->getBvie();
		force_  += arme_->getBforce();
		chance_ += arme_->getBchance();
		degat_  += arme_->getDegat();
		}
		uptoday_ = true;
	}
}
void Personnage::afficheStat()
{
	actuStat();
	std::cout<<std::endl;
	std::cout<<"*************************************"<<std::endl;
	std::cout<<"Statistiques de "<< COLOR_PLAYER << nom_ << COLOR_RESET  <<  std::endl;
	std::cout<<" Vie    : " << COLOR_STAT << vie_ << COLOR_RESET << " / " << vieMax_ << std::endl;
	std::cout<<" Force  : " << COLOR_STAT << force_ << COLOR_RESET  << std::endl;
	std::cout<<" Dégat  : " << COLOR_STAT << degat_ << COLOR_RESET  << std::endl;
	std::cout<<" Chance : " << COLOR_STAT << chance_ << COLOR_RESET  << std::endl;
	std::cout<<" Armure : " << COLOR_STAT << armure_ << COLOR_RESET  << std::endl;
	std::cout<<"*************************************"<<std::endl;
	std::cout<<COLOR_RESET;
}

void Personnage::afficheEquip()
{
	std::cout<<std::endl;
	std::cout<<"*************************************"<<std::endl;
	std::cout<<"Equipement de "<< COLOR_PLAYER << nom_ << COLOR_RESET << std::endl;
	if(casque_) {std::cout<<" Casque : " << COLOR_EQUIP << casque_->getNom() << COLOR_RESET << std::endl;}
	if(torse_)  {std::cout<<" Torse  : " << COLOR_EQUIP << torse_->getNom() << COLOR_RESET << std::endl;}
	if(jambe_)  {std::cout<<" Jambe  : " << COLOR_EQUIP << jambe_->getNom() << COLOR_RESET << std::endl;}
	if(arme_)   {std::cout<<" Arme   : " << COLOR_EQUIP << arme_->getNom() << COLOR_RESET << std::endl;}
	std::cout<<"*************************************"<<std::endl;
}

void Personnage::trouverEquipement(Equipement * e)
{
	std::string choix;
	switch (e->type())
	{
		case EQCASQUE :
			if(casque_)
			{
				std::cout<< " Voulez vous remplacer : "<<std::endl;
				std::cout<< COLOR_EQUIP << casque_->getNom() << COLOR_RESET << std::endl;
				std::cout<< "Par : " <<std::endl;
				std::cout<< COLOR_EQUIP << e->getNom()<< COLOR_RESET <<" ?   y/n "<< std::endl;
				std::cin >> choix;
				if(choix == "y")
				{
					delete casque_;
					setCasque(e);
					uptoday_ = false;
				}
				else
				{
					delete e;
				}
			}
			else
			{
				std::cout<<"Vous équipez : " << COLOR_EQUIP << e->getNom() << COLOR_RESET << std::endl;
				setCasque(e);
				uptoday_ = false;
			}
			break;
		case EQTORSE :
			if(torse_)
			{
				std::cout<< " Voulez vous remplacer : "<<std::endl;
				std::cout<< COLOR_EQUIP << torse_->getNom() << COLOR_RESET << std::endl;
				std::cout<< "Par : " <<std::endl;
				std::cout<< COLOR_EQUIP << e->getNom()<< COLOR_RESET << " ?   y/n "<< std::endl;
				std::cin >> choix;
				if(choix == "y")
				{
					delete torse_;
					setTorse(e);
					uptoday_ = false;
				}
				else
				{
					delete e;
				}

			}
			else
			{
				std::cout<<"Vous équipez : " << COLOR_EQUIP << e->getNom() << COLOR_RESET <<std::endl;
				setTorse(e);
				uptoday_ = false;
			}
			break;
		case EQJAMBE :
			if(jambe_)
			{
				std::cout<< " Voulez vous remplacer : "<<std::endl;
				std::cout<< COLOR_EQUIP << jambe_->getNom() << COLOR_RESET <<std::endl;
				std::cout<< "Par : " <<std::endl;
				std::cout<< COLOR_EQUIP << e->getNom()<< COLOR_RESET << " ?   y/n "<< std::endl;
				std::cin >> choix;
				if(choix == "y")
				{
					delete jambe_;
					setJambe(e);
					uptoday_ = false;
				}
				else
				{
					delete e;
				}
			}
			else
			{
				std::cout<<"Vous équipez : " << COLOR_EQUIP << e->getNom() << COLOR_RESET << std::endl;
				setJambe(e);
				uptoday_ = false;
			}
			break;

	}
}

void Personnage::trouverArme(Arme * a)
{
	std::string choix;
	if(arme_)
	{
		std::cout<< " Voulez vous remplacer : "<<std::endl;
		std::cout<< COLOR_EQUIP << arme_->getNom() << COLOR_RESET << std::endl;
		std::cout<< "Par : " <<std::endl;
		std::cout<< COLOR_EQUIP << a->getNom() << COLOR_RESET << " ?   y/n "<< std::endl;
		std::cin >> choix;
		if(choix == "y")
		{
			delete arme_;
			setArme(a);
			uptoday_ = false;
		}
		else
		{
			delete a;
		}
	}
	else
	{
		std::cout<<"Vous équipez : " << COLOR_EQUIP << a->getNom() << COLOR_RESET << std::endl;
		setArme(a);
		uptoday_ = false;
	}
}

std::string Personnage::getNom()
{
	actuStat();
	return nom_;
}

int Personnage::getVie()
{
	actuStat();
	if(vie_<0){vie_=0;}
	return vie_;
}

int Personnage::getVieMax()
{
	actuStat();
	return vieMax_;
}

int Personnage::getForce()
{
	actuStat();
	return force_;
}

int Personnage::getChance()
{
	actuStat();
	return chance_;
}

void Personnage::setEquipement(Equipement *e) {
	switch (e->type())
	{
		case EQCASQUE :
			setCasque(e);
			break;
		case EQTORSE :
			setTorse(e);
			break;
		case EQJAMBE :
			setJambe(e);
			break;
	}
}

void Personnage::setCasque(Equipement *casque)
{
	uptoday_ = false;
	casque_ = casque;
}

void Personnage::setTorse(Equipement *torse)
{
	uptoday_ = false;
	torse_ = torse;
}

void Personnage::setJambe(Equipement *jambe)
{
	uptoday_ = false;
	jambe_ = jambe;
}

void Personnage::setArme(Arme *arme)
{
	uptoday_ = false;
	arme_ = arme;
}

Equipement* Personnage::getCasque()
{
	return casque_;
}

Equipement* Personnage::getTorse()
{
	return torse_;
}

Equipement* Personnage::getJambe()
{
	return jambe_;
}

Arme* Personnage::getArme()
{
	return arme_;
}

int Personnage::recoitDegat(int pv){
	actuStat();
	int degat;
	if (armure_ == 0)
		degat = pv;
	else
		degat = pv - rand()%(armure_);

	if (degat < 0)
		degat = 0;

	vie_ -= degat;
	return degat;
}

int Personnage::envoieDegat() {
	actuStat();
	return  3*degat_ + force_ + force_*(rand()%(chance_));
}

bool Personnage::isAlive() {
	return vie_ > 0;
}

