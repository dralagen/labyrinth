
#include "DArmeF.hpp"

DArmeF::DArmeF(Arme * e)
{
	e_ = e;
	std::size_t trouve;
	trouve = e->getNom().find(" de Force+");
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
		trouve = e->getNom().find(" de Force");
		if(trouve!=std::string::npos)
		{
			e->setNom(e->getNom().insert(trouve+9,"+1 "));
		}
		else
		{
			e->setNom(e->getNom()+" de Force");
		}

	}
	e->setBforce(e->getBforce()+2);
}

DArmeF::~DArmeF() {}

