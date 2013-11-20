#include "ConsoChance.hpp"

ConsoChance::ConsoChance()
{
    nom_ = "Potion de Chance";
    bchance_ = 4;
    bforce_ = 0;
    bvie_ = 0;
}

std::string ConsoChance::getNom()
{
    return nom_;
}
int ConsoChance::getBchance()
{
    return bchance_;
}


int ConsoChance::getBforce()
{
    return bforce_;
}


int ConsoChance::getBvie()
{
    return bvie_;
}

void ConsoChance::setBvie(int bvie)
{
    bvie_ = bvie;
}

void ConsoChance::setBchance(int bchance)
{
    bchance_ = bchance;
}


void ConsoChance::setBforce(int bforce)
{
    bforce_ = bforce;
}

void ConsoChance::setNom(std::string nom)
{
    nom_ = nom;
}
