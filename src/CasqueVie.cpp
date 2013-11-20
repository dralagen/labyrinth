#include "CasqueVie.hpp"

CasqueVie::CasqueVie()
{
    nom_ = "Casque de Vie";
    armure_ = 5;
    bchance_ = 0;
    bforce_ = 0;
    bvie_ = 4;
}
std::string CasqueVie::getNom()
{
    return nom_;
}
int CasqueVie::getBchance()
{
    return bchance_;
}

int CasqueVie::getArmure()
{
    return armure_;
}

int CasqueVie::getBforce()
{
    return bforce_;
}


int CasqueVie::getBvie()
{
    return bvie_;
}

void CasqueVie::setBvie(int bvie)
{
    bvie_ = bvie;
}

void CasqueVie::setBchance(int bchance)
{
    bchance_ = bchance;
}

void CasqueVie::setArmure(int armure)
{
    armure_ = armure;
}

void CasqueVie::setBforce(int bforce)
{
    bforce_ = bforce;
}

void CasqueVie::setNom(std::string nom)
{
    nom_ = nom;
}
