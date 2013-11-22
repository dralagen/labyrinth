#ifndef DARMEF_HPP
#define DARMEF_HPP
#include "Arme.hpp"
#include <iostream>
#include <sstream>
#include <string>


class DArmeF : public Arme
{

  private:
    Arme * e_;
  public:
    DArmeF(Arme * e);
    ~DArmeF();
    std::string getNom();
    int getBforce();
    int getBvie();
    int getBchance();
    int getDegat();
		void setBforce(int bforce);
		void setBvie(int bvie);
		void setBchance(int bchance);
		void setDegat(int degat);
		void setNom(std::string nom);
};


#endif /* DArmeF.hpp */
