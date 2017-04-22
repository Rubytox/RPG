#include "Elfe.hpp"
#include <iostream>

using namespace std;

Elfe::Elfe(int PV, int maxPV, int degatsDeBase, int niveau, std::string nom, Element element) : Personnage(PV, maxPV, degatsDeBase, niveau, nom, element)
{

}

Elfe::~Elfe()
{

}

void Elfe::sePresenter() const
{
	Personnage::sePresenter();
	cout << "Je suis un Elfe !" << endl;
}