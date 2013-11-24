
#include "DArmeD.hpp"

DArmeD::DArmeD(Arme * e)
{
	e_ = e;
	std::size_t trouve;
	trouve = e->getNom().find("Puissante+");
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e->getNom().substr(trouve+10,2));
		int i;
		buff >> i;
		i++;
		std::ostringstream convert;
		convert << i;
		if (i > 9)
			e->setNom(e->getNom().replace(trouve+10,2,convert.str()));
		else
			e->setNom(e->getNom().replace(trouve+10,1,convert.str()));
	}
	else
	{
		trouve = e->getNom().find("Puissante");
		if(trouve!=std::string::npos)
		{
			e->setNom(e->getNom().insert(trouve+9,"+1"));
		}
		else
		{
			e->setNom("Puissante "+e->getNom());
		}

	}
	e->setDegat(e->getDegat()+2);
}

DArmeD::~DArmeD() {}

