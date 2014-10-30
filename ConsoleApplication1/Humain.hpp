#ifndef HUMAIN_HPP
#define HUMAIN_HPP

#include "Personnage.hpp"

class Humain : public Personnage
{
public: 
	Humain(int PV, int degatsDeBase, int niveau, std::string nom, Element element);
	void sePresenter() const;
	~Humain();

protected:
};

#endif // HUMAIN_HPP