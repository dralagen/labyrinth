#include "HacheVie.hpp"

HacheVie::HacheVie()
{
    nom_ ="Hache de Vie";
    degat_ = 20;
    bchance_ = 0;
    bforce_ = 2;
    bvie_ = 4;
}

std::string HacheVie::getNom()
{
    return nom_;
}


int HacheVie::getBchance()
{
    return bchance_;
}

int HacheVie::getDegat()
{
    return degat_;
}

int HacheVie::getBforce()
{
    return bforce_;
}


int HacheVie::getBvie()
{
    return bvie_;
}

void HacheVie::setBvie(int bvie)
{
    bvie_ = bvie;
}

void HacheVie::setBchance(int bchance)
{
    bchance_ = bchance;
}

void HacheVie::setDegat(int degat)
{
    degat_ = degat;
}

void HacheVie::setBforce(int bforce)
{
    bforce_ = bforce;
}

void HacheVie::setNom(std::string nom)
{
    nom_ = nom;
}
