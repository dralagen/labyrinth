#include "ConsoForce.hpp"


ConsoForce::ConsoForce()
{   
    nom_ = "Potion de Force";
    bchance_ = 0;
    bforce_ = 4;
    bvie_ = 0;
}
std::string ConsoForce::getNom()
{
    return nom_;
}
int ConsoForce::getBchance()
{
    return bchance_;
}


int ConsoForce::getBforce()
{
    return bforce_;
}


int ConsoForce::getBvie()
{
    return bvie_;
}

void ConsoForce::setBvie(int bvie)
{
    bvie_ = bvie;
}

void ConsoForce::setBchance(int bchance)
{
    bchance_ = bchance;
}


void ConsoForce::setBforce(int bforce)
{
    bforce_ = bforce;
}

void ConsoForce::setNom(std::string nom)
{
    nom_ = nom;
}
