
#include "DEquipA.hpp"

DEquipA::DEquipA(Equipement * e)
{
    e_ = e;
    std::size_t trouve;
    trouve = e->getNom().find(" d'Armure+");
    if (trouve!=std::string::npos)
    {
        std::istringstream buff(e->getNom().substr(trouve+10,2));
        int i;
        buff >> i;
        i++;
        std::ostringstream convert;
        convert << i;
        if (i > 9)
            e->setNom(e->getNom().replace(trouve+10,2,convert.str()));
        else
            e->setNom(e->getNom().replace(trouve+10,1,convert.str()));
    }
    else
    {
        trouve = e->getNom().find(" d'Armure");
        if(trouve!=std::string::npos)
        {
            e->setNom(e->getNom().insert(trouve+9,"+1 "));
        }
        else
        {
            e->setNom(e->getNom()+" d'Armure");
        }
   
    }
     e->setArmure(e->getArmure()+2);
}



std::string DEquipA::getNom()
{
    return e_->getNom();
}
int DEquipA::getBchance()
{
    return e_->getBchance();
}

int DEquipA::getArmure()
{
    return e_->getArmure();
}

int DEquipA::getBforce()
{
    return e_->getBforce();
}


int DEquipA::getBvie()
{
    return e_->getBvie();
}

void DEquipA::setBvie(int bvie)
{
    e_->setBvie(bvie);
}

void DEquipA::setBchance(int bchance)
{
    e_->setBchance(bchance);
}

void DEquipA::setArmure(int armure)
{
    e_->setArmure(armure);
}

void DEquipA::setBforce(int bforce)
{
    e_->setBforce(bforce);
}
void DEquipA::setNom(std::string nom)
{
    e_->setNom(nom);
}

int DEquipA::type()
{
	return e_->type();
}
