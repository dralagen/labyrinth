
#include "DArmeC.hpp"

DArmeC::DArmeC(Arme * e)
{
    e_ = e;
    std::size_t trouve;
    trouve = e->getNom().find(" de Chance+");
    if (trouve!=std::string::npos)
    {
        std::istringstream buff(e->getNom().substr(trouve+11,2));
        int i;
        buff >> i;
        i++;
        std::ostringstream convert;
        convert << i;
        if (i > 9)
            e->setNom(e->getNom().replace(trouve+11,2,convert.str()));
        else
            e->setNom(e->getNom().replace(trouve+11,1,convert.str()));
    }
    else
    {
        trouve = e->getNom().find(" de Chance");
        if(trouve!=std::string::npos)
        {
            e->setNom(e->getNom().insert(trouve+10,"+1 "));
        }
        else
        {
            e->setNom(e->getNom()+" de Chance");
        }

    }
     e->setBchance(e->getBchance()+2);
}

DArmeC::~DArmeC() {
  delete e_;
}

std::string DArmeC::getNom()
{
    return e_->getNom();
}
int DArmeC::getBchance()
{
    return e_->getBchance();
}

int DArmeC::getDegat()
{
    return e_->getDegat();
}

int DArmeC::getBforce()
{
    return e_->getBforce();
}


int DArmeC::getBvie()
{
    return e_->getBvie();
}

void DArmeC::setBvie(int bvie)
{
    e_->setBvie(bvie);
}

void DArmeC::setBchance(int bchance)
{
    e_->setBchance(bchance);
}

void DArmeC::setDegat(int Degat)
{
    e_->setDegat(Degat);
}

void DArmeC::setBforce(int bforce)
{
    e_->setBforce(bforce);
}
void DArmeC::setNom(std::string nom)
{
    e_->setNom(nom);
}
