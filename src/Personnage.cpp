#include "Personnage.hpp"

Personnage::Personnage(std::string nom)
{
	nom_    = nom;
	vieMax_ = 100;
	vie_    = vieMax_;
	chance_ = 10;
	force_  = 20;
	degat_  = 0;
	armure_ = 0;
	casque_ = 0;
	torse_  = 0;
	jambe_  = 0;
	arme_   = 0;
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
		std::cout<<"Vous êtes mort"<<std::endl;
	}
	Personnage::afficheStat();
}
void Personnage::modifierForce(int f)
{
	force_ += f;
	if(force_ <= 0)
	{
		force_ = 0;
	}
	Personnage::afficheStat();
}
void Personnage::modifierChance(int c)
{
	chance_ += c;
	if(chance_ <= 0)
	{
		chance_ = 0;
	}
	Personnage::afficheStat();
}

void Personnage::actuStat()
{
	vieMax_ = 100;
	force_ = 20;
	chance_ = 10;
	armure_ = 0;
	if(casque_)
	{
		armure_ += casque_->getArmure();
		vieMax_ = vieMax_ + casque_->getBvie();
		force_ = force_ + casque_->getBforce();
		chance_ = chance_ + casque_->getBchance();
	}
	if(torse_)
	{
		armure_ += torse_->getArmure();
		vieMax_ = vieMax_ + torse_->getBvie();
		force_ = force_ + torse_->getBforce();
		chance_ = chance_ + torse_->getBchance();
	}
	if(jambe_)
	{
		armure_ += jambe_->getArmure();
		vieMax_ = vieMax_ + jambe_->getBvie();
		force_ = force_ + jambe_->getBforce();
		chance_ = chance_ + jambe_->getBchance();
	}
	if(arme_)
	{
		vieMax_ = vieMax_ + arme_->getBvie();
		force_ = force_ + arme_->getBforce();
		chance_ = chance_ + arme_->getBchance();
		degat_ = arme_->getDegat();
	}


}
void Personnage::afficheStat()
{
	std::cout<<"*************************************"<<std::endl;
	std::cout<<"Statistiques de "<< nom_ <<  std::endl;
	std::cout<<" Vie : " << vie_ << " / " << vieMax_ << std::endl;
	std::cout<<" Force : " << force_ << std::endl;
	std::cout<<" Dégat : " << degat_ << std::endl;
	std::cout<<" Chance : " << chance_ << std::endl;
	std::cout<<" Armure : " << armure_ << std::endl;
	std::cout<<"*************************************"<<std::endl;
}

void Personnage::afficheEquip()
{
	std::cout<<"*************************************"<<std::endl;
	std::cout<<"Equipement de "<< nom_ << std::endl;
	if(casque_) {std::cout<<"Casque : " << casque_->getNom() << std::endl;}
	if(torse_)  {std::cout<<"Torse : " << torse_->getNom() << std::endl;}
	if(jambe_)  {std::cout<<"Jambe : " << jambe_->getNom() << std::endl;}
	if(arme_)   {std::cout<<"Arme : " << arme_->getNom() << std::endl;}
	std::cout<<"*************************************"<<std::endl;
}

void Personnage::trouverEquipement(Equipement * e)
{
	afficheEquip();
	std::string choix;
	std::cout<< " Voulez vous equiper : " <<e->getNom()<<" ?    y/n" << std::endl;
	std::cin >> choix;
	if(choix == "y")
	{
		switch (e->type())
		{
			case EQCASQUE :
				delete casque_;
				casque_ = e;
				break;
			case EQTORSE :
				delete torse_;
				torse_ = e;
				break;
			case EQJAMBE :
				delete jambe_;
				jambe_ = e;
				break;
		}
		actuStat();
	}
	else {
		delete e;
	}

}


void Personnage::trouverArme(Arme * a)
{
	std::string choix;
	std::cout<< " Voulez vous equiper : " <<a->getNom()<<" ?    y/n" << std::endl;
	std::cin >> choix;
	if(choix == "y")
	{
		delete arme_;
		arme_ = a;
		actuStat();
	}
	else {
		delete a;
	}

}

std::string Personnage::getNom()
{
	return nom_;
}

int Personnage::getVie()
{
	return vie_;
}

int Personnage::getVieMax()
{
	return vieMax_;
}

int Personnage::getForce()
{
	return force_;
}

int Personnage::getChance()
{
	return chance_;
}

void Personnage::setCasque(Equipement *casque)
{
	casque_ = casque;

}

void Personnage::setTorse(Equipement *torse)
{
	torse_ = torse;
}

void Personnage::setJambe(Equipement *jambe)
{
	jambe_ = jambe;
}

void Personnage::setArme(Arme *arme)
{
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
	return  degat_ + force_ + force_*(rand()%(chance_));
}
bool Personnage::isAlive() {
	return vie_ > 0;
}
