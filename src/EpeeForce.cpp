#include "EpeeForce.hpp"

EpeeForce::EpeeForce()
{ 
    nom_ = "Epee de Force";
    degat_ = 15;
    bchance_ = 0;
    bforce_ = 4;
    bvie_ = 2;
}

std::string EpeeForce::getNom()
{
    return nom_;
}

int EpeeForce::getBchance()
{
    return bchance_;
}

int EpeeForce::getDegat()
{
    return degat_;
}

int EpeeForce::getBforce()
{
    return bforce_;
}


int EpeeForce::getBvie()
{
    return bvie_;
}

void EpeeForce::setBvie(int bvie)
{
    bvie_ = bvie;
}

void EpeeForce::setBchance(int bchance)
{
    bchance_ = bchance;
}

void EpeeForce::setDegat(int degat)
{
    degat_ = degat;
}

void EpeeForce::setBforce(int bforce)
{
    bforce_ = bforce;
}

void EpeeForce::setNom(std::string nom)
{
    nom_ = nom;
}
