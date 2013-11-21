#include "DagueChance.hpp"
DagueChance::DagueChance()
{
    nom_ = "Dague de Chance";
    degat_ = 10;
    bchance_ = 6;
    bforce_ = 0;
    bvie_ = 0;
}

std::string DagueChance::getNom()
{
    return nom_;
}

int DagueChance::getBchance()
{
    return bchance_;
}

int DagueChance::getDegat()
{
    return degat_;
}

int DagueChance::getBforce()
{
    return bforce_;
}


int DagueChance::getBvie()
{
    return bvie_;
}

void DagueChance::setBvie(int bvie)
{
    bvie_ = bvie;
}

void DagueChance::setBchance(int bchance)
{
    bchance_ = bchance;
}

void DagueChance::setDegat(int degat)
{
    degat_ = degat;
}

void DagueChance::setBforce(int bforce)
{
    bforce_ = bforce;
}

void DagueChance::setNom(std::string nom)
{
    nom_ = nom;
}
