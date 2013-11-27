#include "DArme.hpp"

DArme::DArme(Arme *e) {
	e_ = e;
}

DArme::~DArme() {
	delete e_;
}

int DArme::getBchance()
{
	return e_->getBchance() + bchance_;
}

int DArme::getDegat()
{
	return e_->getDegat() + degat_;
}

int DArme::getBforce()
{
	return e_->getBforce() + bforce_;
}

int DArme::getBvie()
{
	return e_->getBvie() + bvie_;
}

std::string DArme::replace(std::string str) {
	std::size_t trouve;
	std::string nom;
	trouve = e_->getNom().find(str+"+");                                       //On recherche si le nom possède la string passée en paramètre suivis de "+"
	if (trouve!=std::string::npos)
	{
		std::istringstream buff(e_->getNom().substr(trouve+str.length()+1,2));      //On récupère la valeur après le "+"
		int i;
		buff >> i;                                                                  //On convertis cette valeur en entier pour l'imcrémenter
		i++;
		std::ostringstream convert;                                            
		convert << i;                                                               //On la reconvertis en String pour la remettre dans le nom
		if (i > 9)
			nom = e_->getNom().replace(trouve+str.length()+1,2,convert.str());      //Si i>9 on passe a +10
		else
			nom = e_->getNom().replace(trouve+str.length()+1,1,convert.str());
	}
	else
	{
		trouve = e_->getNom().find(str);                                       //Sinon on cherche si le nom possède la string passée en paramètre
		if(trouve!=std::string::npos)
		{
			nom = e_->getNom().insert(trouve+str.length(),"+1 ");                    //Si oui, on ajoute "+1" après cette string
		}
		else
		{
			nom = e_->getNom()+str;                                                 //Si la string n'est pas contenue dans le nom ,
			                                                                        //on l'ajoute à la fin du nom
		}
	}

	return nom;
}

