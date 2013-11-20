
#include "DEquipV.hpp"

DEquipV::DEquipV(Equipement * e)
{
    e_ = e;
    std::size_t trouve;
    trouve = e->getNom().find(" de Vie+");
    if (trouve!=std::string::npos)
    {
        std::istringstream buff(e->getNom().substr(trouve+8,2));
        int i;
        buff >> i;
        i++;
        std::ostringstream convert;
        convert << i;
        if (i > 9)
            e->setNom(e->getNom().replace(trouve+8,2,convert.str()));
        else
            e->setNom(e->getNom().replace(trouve+8,1,convert.str()));
    }
    else
    {
        trouve = e->getNom().find(" de Vie");
        if(trouve!=std::string::npos)
        {
            e->setNom(e->getNom().insert(trouve+7,"+1 "));
        }
        else
        {
            e->setNom(e->getNom()+" de Vie");
        }
   
    }
     e->setBvie(e->getBvie()+2);
}



std::string DEquipV::getNom()
{
    return e_->getNom();
}
int DEquipV::getBchance()
{
    return e_->getBchance();
}

int DEquipV::getArmure()
{
    return e_->getArmure();
}

int DEquipV::getBforce()
{
    return e_->getBforce();
}


int DEquipV::getBvie()
{
    return e_->getBvie();
}

void DEquipV::setBvie(int bvie)
{
    e_->setBvie(bvie);
}

void DEquipV::setBchance(int bchance)
{
    e_->setBchance(bchance);
}

void DEquipV::setArmure(int armure)
{
    e_->setArmure(armure);
}

void DEquipV::setBforce(int bforce)
{
    e_->setBforce(bforce);
}
void DEquipV::setNom(std::string nom)
{
    e_->setNom(nom);
}

int DEquipV::type()
{
	return e_->type();
}
