#include "Sorcier.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

Sorcier::Sorcier(int PV, int degatsDeBase, int niveau, std::string m_nom, Element element) : Elfe(PV, degatsDeBase, niveau, m_nom, element) // 
{
	BouleDeFeu BouleDeFeu("Boule de Feu", 10, 0);
	BouleDeGlace BouleDeGlace("Boule de Glace", 20, 0);
	BouleDeFoudre BouleDeFoudre("Boule de Foudre", 40, 0);

	m_sorts.push_back(BouleDeFeu);
	m_sorts.push_back(BouleDeGlace);
	m_sorts.push_back(BouleDeFoudre);
}

Sorcier::~Sorcier()
{

}

void Sorcier::lancerSort(LivingEntity& cible, int idSort)
{
	if (!sortDisponible(idSort))
	{
		cout << "Le sort n'est pas encore appris..." << endl;
		return;
	}

	cout << "Sorcier lance le sort " << m_sorts[idSort].getNom() << " sur " << cible.getNom() << " qui se prend " << m_sorts[idSort].getPuissance() << " degats." << endl;
	cible.recevoirDegats(m_sorts[idSort].getPuissance());
}

bool Sorcier::sortDisponible(int idSort) const
{
	for (unsigned int i = 0; i < m_sorts.size(); ++i)
	{
		if (m_sorts[i].getID() == idSort)
			return true;
	}
	return false;
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