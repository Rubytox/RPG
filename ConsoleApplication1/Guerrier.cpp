#include "Guerrier.hpp"
#include <iostream>

using namespace std;

Guerrier::Guerrier(int PV, int maxPV, int degatsDeBase, int niveau, std::string nom, Element element) : Humain(PV, maxPV, degatsDeBase, niveau, nom, element)
{

}

Guerrier::~Guerrier()
{

}

void Guerrier::hurler(LivingEntity &cible)
{
	cible.recevoirDegats(10);
}

void Guerrier::sePresenter() const
{
	Humain::sePresenter();
	cout << "Je suis un guerrier !" << endl;
}