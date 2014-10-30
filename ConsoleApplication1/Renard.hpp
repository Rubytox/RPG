#ifndef RENARD_HPP
#define RENARD_HPP

#include "Enemy.hpp"

class Renard : public Enemy
{
public:
	Renard(int PV, int degatsDeBase, int niveau, std::string nom, Element element, bool hostile);

	void griffer(LivingEntity &cible); // Inflige des dégâts de griffure à une cible quelconque
	void sePresenter() const;

	~Renard();
private:
};

#endif // RENARD_HPP