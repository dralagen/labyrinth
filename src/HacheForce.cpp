#include "HacheForce.hpp"

HacheForce::HacheForce()
{   
    nom_= "Hache de Force";
    degat_ = 20;
    bchance_ = 0;
    bforce_ = 6;
    bvie_ = 0;
}

std::string HacheForce::getNom()
{
    return nom_;
}

int HacheForce::getBchance()
{
    return bchance_;
}

int HacheForce::getDegat()
{
    return degat_;
}

int HacheForce::getBforce()
{
    return bforce_;
}


int HacheForce::getBvie()
{
    return bvie_;
}

void HacheForce::setBvie(int bvie)
{
    bvie_ = bvie;
}

void HacheForce::setBchance(int bchance)
{
    bchance_ = bchance;
}

void HacheForce::setDegat(int degat)
{
    degat_ = degat;
}

void HacheForce::setBforce(int bforce)
{
    bforce_ = bforce;
}

void HacheForce::setNom(std::string nom)
{
    nom_ = nom;
}
