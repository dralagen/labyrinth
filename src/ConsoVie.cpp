#include "ConsoVie.hpp"

ConsoVie::ConsoVie()
{
    nom_ = "Potion de Vie";
    bchance_ = 0;
    bforce_ = 0;
    bvie_ = 4;
}

std::string ConsoVie::getNom()
{
    return nom_;
}
int ConsoVie::getBchance()
{
    return bchance_;
}


int ConsoVie::getBforce()
{
    return bforce_;
}


int ConsoVie::getBvie()
{
    return bvie_;
}

void ConsoVie::setBvie(int bvie)
{
    bvie_ = bvie;
}

void ConsoVie::setBchance(int bchance)
{
    bchance_ = bchance;
}


void ConsoVie::setBforce(int bforce)
{
    bforce_ = bforce;
}

void ConsoVie::setNom(std::string nom)
{
    nom_ = nom;
}
