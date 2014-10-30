#ifndef GUERRIER_HPP
#define GUERRIER_HPP

#include "Humain.hpp"

class Guerrier : public Humain
{
public:
	Guerrier(int PV, int degatsDeBase, int niveau, std::string nom, Element element);

	void hurler(LivingEntity &cible); // Inflige des dégâts sonores à une cible quelconque
	void sePresenter() const;

	~Guerrier();
private:
};

#endif // GUERRIER_HPP