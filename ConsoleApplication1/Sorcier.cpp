#include "Sorcier.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

Sorcier::Sorcier(int PV, int degatsDeBase, int niveau, std::string m_nom, Element element) : Elfe(PV, degatsDeBase, niveau, m_nom, element) // 
{
	m_sorts.push_back(BOULE_DE_FEU);
	m_sorts.push_back(BOULE_DE_GLACE);
}

Sorcier::~Sorcier()
{

}

void Sorcier::lancerSort(LivingEntity &cible, Sorts sort)
{
	if (rand() % 6 == 1 || rand() % 6 == 3 || rand() % 6 == 5)
	{
		if (sort == BOULE_DE_FEU)
		{
			if (inVector(m_sorts, BOULE_DE_FEU))
			{
				cout << "Sorcier lance une boule de feu sur " << cible.getNom() << " et lui inflige 10 points de degats !" << endl;
				cible.recevoirDegats(10);
			}
			else
			{
				cout << "Sorcier ne peut pas lancer le sort \"Boule de Feu\" car il ne le connait pas encore !" << endl;
			}
		}
		else if (sort == BOULE_DE_GLACE)
		{
			cout << "Sorcier lance une boule de glace sur " << cible.getNom() << " et lui inflige 20 points de degats !" << endl;
			cible.recevoirDegats(20);
		}
		else if (sort == BOULE_DE_FOUDRE)
		{
			cout << "Sorcier lance une boule de foudre sur " << cible.getNom() << " et lui inflige 40 points de degats !" << endl;
			cible.recevoirDegats(40);
		}
		else
		{
			cible.recevoirDegats(0);
		}
	}
	else
	{
		cout << "L'attaque de sorcier a echoue !" << endl;
	}

	
}

void Sorcier::soin(LivingEntity &cible)
{
	cible.recevoirPV(10);
}

void Sorcier::sePresenter() const
{
	Elfe::sePresenter();
	cout << "Je suis un sorcier !" << endl;
}