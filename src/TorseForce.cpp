#include "TorseForce.hpp"

TorseForce::TorseForce()
{
    nom_ = "Plastron de Force";
    armure_ = 10;
    bchance_ = 0;
    bforce_ = 4;
    bvie_ = 0;
}

std::string TorseForce::getNom()
{
    return nom_;
}

int TorseForce::getBchance()
{
    return bchance_;
}

int TorseForce::getArmure()
{
    return armure_;
}

int TorseForce::getBforce()
{
    return bforce_;
}


int TorseForce::getBvie()
{
    return bvie_;
}

void TorseForce::setBvie(int bvie)
{
    bvie_ = bvie;
}

void TorseForce::setBchance(int bchance)
{
    bchance_ = bchance;
}

void TorseForce::setArmure(int armure)
{
    armure_ = armure;
}

void TorseForce::setBforce(int bforce)
{
    bforce_ = bforce;
}

void TorseForce::setNom(std::string nom)
{
    nom_ = nom;
}
