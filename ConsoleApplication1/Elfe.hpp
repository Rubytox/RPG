#ifndef ELFE_HPP
#define ELFE_HPP

#include "Personnage.hpp"

class Elfe : public Personnage
{
public:
	Elfe(int PV, int degatsDeBase, int niveau, std::string nom, Element element);
	void sePresenter() const;
	~Elfe();

protected:
};

#endif // ELFE_HPP