#include "Renard.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Renard::Renard(int PV, int degatsDeBase, int niveau, std::string nom, Element element, bool hostile) : Enemy(PV, degatsDeBase, niveau, nom, element, hostile)
{
	cout << "Un renard apparaît!" << endl;
}

Renard::~Renard()
{

}

void Renard::griffer(LivingEntity &cible)
{
	if (vivant())
	{
		if (rand() % 2 == 0)
		{
			cout << "Renard griffe " << cible.getNom() << " et lui inflige 20 points de degats." << endl;
			cible.recevoirDegats(20);
		}
		else
			cout << "L'attaque de renard a echoue !" << endl;
	}
	else
	{
		cout << "Renard ne peut pas attaquer car il est mort !" << endl;
	}
}

void Renard::sePresenter() const
{
	Enemy::sePresenter();
	cout << "Je suis un renard!" << endl;
}