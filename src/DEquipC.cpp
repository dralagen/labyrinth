
#include "DEquipC.hpp"

DEquipC::DEquipC(Equipement * e)
{
	e_ = e;
	std::size_t trouve;
	trouve = e->getNom().find(" de Chance+");
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e->getNom().substr(trouve+11,2));
		int i;
		buff >> i;
		i++;
		std::ostringstream convert;
		convert << i;
		if (i > 9)
			e->setNom(e->getNom().replace(trouve+11,2,convert.str()));
		else
			e->setNom(e->getNom().replace(trouve+11,1,convert.str()));
	}
	else
	{
		trouve = e->getNom().find(" de Chance");
		if(trouve!=std::string::npos)
		{
			e->setNom(e->getNom().insert(trouve+10,"+1 "));
		}
		else
		{
			e->setNom(e->getNom()+" de Chance");
		}

	}
	e->setBchance(e->getBchance()+2);
}

DEquipC::~DEquipC() {
}

