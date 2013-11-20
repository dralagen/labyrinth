#include "CasqueChance.hpp"

CasqueChance::CasqueChance()
{
    nom_ = "Casque de Chance";
    armure_ = 5;
    bchance_ = 4;
    bforce_ = 0;
    bvie_ = 0;
}

std::string CasqueChance::getNom()
{
    return nom_;
}
int CasqueChance::getBchance()
{
    return bchance_;
}

int CasqueChance::getArmure()
{
    return armure_;
}

int CasqueChance::getBforce()
{
    return bforce_;
}


int CasqueChance::getBvie()
{
    return bvie_;
}

void CasqueChance::setBvie(int bvie)
{
    bvie_ = bvie;
}

void CasqueChance::setBchance(int bchance)
{
    bchance_ = bchance;
}

void CasqueChance::setArmure(int armure)
{
    armure_ = armure;
}

void CasqueChance::setBforce(int bforce)
{
    bforce_ = bforce;
}

void CasqueChance::setNom(std::string nom)
{
    nom_ = nom;
}
