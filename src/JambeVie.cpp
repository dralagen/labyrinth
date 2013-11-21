#include "JambeVie.hpp"

JambeVie::JambeVie()
{
    nom_ = "Jambieres de Vie";
    armure_ = 7;
    bchance_ = 0;
    bforce_ = 0;
    bvie_ = 4;
}

std::string JambeVie::getNom()
{
    return nom_;
}

int JambeVie::getBchance()
{
    return bchance_;
}

int JambeVie::getArmure()
{
    return armure_;
}

int JambeVie::getBforce()
{
    return bforce_;
}


int JambeVie::getBvie()
{
    return bvie_;
}

void JambeVie::setBvie(int bvie)
{
    bvie_ = bvie;
}

void JambeVie::setBchance(int bchance)
{
    bchance_ = bchance;
}

void JambeVie::setArmure(int armure)
{
    armure_ = armure;
}

void JambeVie::setBforce(int bforce)
{
    bforce_ = bforce;
}

void JambeVie::setNom(std::string nom)
{
    nom_ = nom;
}
