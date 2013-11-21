#include "TorseChance.hpp"

//TorseChance::~TorseChance(){}

TorseChance::TorseChance()
{
    nom_ = "Plastron de Chance";
    armure_ = 10;
    bchance_ = 4;
    bforce_ = 0;
    bvie_ = 0;
}
std::string TorseChance::getNom()
{
    return nom_;
}

int TorseChance::getBchance()
{
    return bchance_;
}

int TorseChance::getArmure()
{
    return armure_;
}

int TorseChance::getBforce()
{
    return bforce_;
}


int TorseChance::getBvie()
{
    return bvie_;
}

void TorseChance::setBvie(int bvie)
{
    bvie_ = bvie;
}

void TorseChance::setBchance(int bchance)
{
    bchance_ = bchance;
}

void TorseChance::setArmure(int armure)
{
    armure_ = armure;
}

void TorseChance::setBforce(int bforce)
{
    bforce_ = bforce;
}

void TorseChance::setNom(std::string nom)
{
    nom_ = nom;
}
