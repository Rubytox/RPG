#include <iostream>
#include "Personnage.hpp"

using namespace std;

// CONSTRUCTEURS
Personnage::Personnage(int PV, int maxPV, int degatsDeBase, int niveau, std::string nom, Element element) : LivingEntity(PV, maxPV, degatsDeBase, niveau, nom, element)
{
}


Personnage::~Personnage()
{
}

void Personnage::sePresenter() const
{
	LivingEntity::sePresenter();
	cout << "Je suis un personnage !" << endl;
}