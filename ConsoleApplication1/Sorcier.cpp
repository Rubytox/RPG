#include "Sorcier.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

using namespace std;

Sorcier::Sorcier(int PV, int maxPV, int degatsDeBase, int niveau, std::string m_nom, Element element) : Elfe(PV, maxPV, degatsDeBase, niveau, m_nom, element) // 
{
	//BouleDeFeu BDF("Boule de Feu", 10, 0);
	BouleDeFeu *BDF = new BouleDeFeu("Boule de Feu", 10, 0);
	BouleDeGlace *BDG = new BouleDeGlace("Boule de Glace", 20, 0);
	BouleDeFoudre *BDFo = new BouleDeFoudre("Boule de Foudre", 40, 0);

	m_sorts.push_back(BDF);
	m_sorts.push_back(BDG);
	m_sorts.push_back(BDFo);
}

Sorcier::~Sorcier()
{
	for (int i = 0; i < m_sorts.size(); i++)
	{
		delete m_sorts[i];
	}
}

void Sorcier::lancerSort(LivingEntity& cible, int idSort)
{
	if (!sortDisponible(idSort))
	{
		cout << "Le sort n'est pas encore appris..." << endl;
	}
	else
	{
		cout << "Sorcier lance le sort " << m_sorts[idSort]->getNom() << " sur " << cible.getNom() << " qui se prend " << m_sorts[idSort]->getPuissance() << " degats." << endl;
		cible.recevoirDegats(m_sorts[idSort]->getPuissance());
	}
}

bool Sorcier::sortDisponible(int idSort) const
{
	for (unsigned int i = 0; i < m_sorts.size(); ++i)
	{
		if (m_sorts[i]->getID() == idSort)
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