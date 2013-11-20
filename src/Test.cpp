#include <iostream>
#include <string>
#include "ItemFactory.hpp"
#include "Personnage.hpp"
#include "Equipement.hpp"
#include "DEquipA.hpp"
#include "DEquipC.hpp"
#include "DEquipV.hpp"
#include "DEquipF.hpp"
#include "DArmeD.hpp"
#include "DArmeF.hpp"
#include "DArmeC.hpp"
#include "DArmeV.hpp"


using namespace std;
int main()
{
    Personnage * p = new Personnage("John");
    p->afficheStat();
    ItemFactory *factory = ItemFactory::CreateFactory(CHANCEF);
    p->trouverEquipement(new DEquipC(factory->GetCasque()));
    p->trouverEquipement(new DEquipV(new DEquipA(new DEquipF(factory->GetTorse()))));
    p->trouverEquipement(factory->GetJambe());
    p->trouverArme(factory->GetHache());
    p->actuStat();
    p->afficheStat();
    p->afficheEquip();
    
    delete p;
    return 0;
}
