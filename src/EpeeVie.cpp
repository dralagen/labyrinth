#include "EpeeVie.hpp"

EpeeVie::EpeeVie()
{   
    nom_ = "Epee de Vie";
    degat_ = 15;
    bchance_ = 0;
    bforce_ = 0;
    bvie_ = 6;
}

std::string EpeeVie::getNom()
{
    return nom_;
}

int EpeeVie::getBchance()
{
    return bchance_;
}

int EpeeVie::getDegat()
{
    return degat_;
}

int EpeeVie::getBforce()
{
    return bforce_;
}


int EpeeVie::getBvie()
{
    return bvie_;
}

void EpeeVie::setBvie(int bvie)
{
    bvie_ = bvie;
}

void EpeeVie::setBchance(int bchance)
{
    bchance_ = bchance;
}

void EpeeVie::setDegat(int degat)
{
    degat_ = degat;
}

void EpeeVie::setBforce(int bforce)
{
    bforce_ = bforce;

}
void EpeeVie::setNom(std::string nom)
{
    nom_ = nom;
}
