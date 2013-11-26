#include "Personnage.hpp"

Personnage::Personnage(std::string nom): nom_(nom), initVieMax_(100), initChance_(10), initForce_(20), initDegat_(0), initArmure_(0)
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
		std::cout<<"Vous êtes mort"<<std::endl;
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
			vieMax_ = vieMax_ + 2*casque_->getBvie();
			force_ = force_ + casque_->getBforce();
			chance_ = chance_ + casque_->getBchance();
		}
		if(torse_)
		{
			armure_ += torse_->getArmure();
			vieMax_ = vieMax_ + 2*torse_->getBvie();
			force_ = force_ + torse_->getBforce();
			chance_ = chance_ + torse_->getBchance();
		}
		if(jambe_)
		{
			armure_ += jambe_->getArmure();
			vieMax_ = vieMax_ + 2*jambe_->getBvie();
			force_ = force_ + jambe_->getBforce();
			chance_ = chance_ + jambe_->getBchance();
		}
		if(arme_)
		{
			vieMax_ = vieMax_ + 2*arme_->getBvie();
			force_ = force_ + arme_->getBforce();
			chance_ = chance_ + arme_->getBchance();
			degat_ = arme_->getDegat();
		}
		uptoday_ = true;
	}
}
void Personnage::afficheStat()
{
	actuStat();
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
				setCasque(e);
				break;
			case EQTORSE :
				delete torse_;
				setTorse(e);
				break;
			case EQJAMBE :
				delete jambe_;
				setJambe(e);
				break;
		}
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
		uptoday_ = false;
	}
	else {
		delete a;
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

