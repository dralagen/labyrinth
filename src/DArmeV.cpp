
#include "DArmeV.hpp"

DArmeV::DArmeV(Arme * e)
{
	e_ = e;
	std::size_t trouve;
	trouve = e->getNom().find(" de Vie+");
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e->getNom().substr(trouve+8,2));
		int i;
		buff >> i;
		i++;
		std::ostringstream convert;
		convert << i;
		if (i > 9)
			e->setNom(e->getNom().replace(trouve+8,2,convert.str()));
		else
			e->setNom(e->getNom().replace(trouve+8,1,convert.str()));
	}
	else
	{
		trouve = e->getNom().find(" de Vie");
		if(trouve!=std::string::npos)
		{
			e->setNom(e->getNom().insert(trouve+7,"+1 "));
		}
		else
		{
			e->setNom(e->getNom()+" de Vie");
		}

	}
	e->setBvie(e->getBvie()+2);
}

DArmeV::~DArmeV() {}

