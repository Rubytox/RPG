#include "Elfe.hpp"
#include <iostream>

using namespace std;

Elfe::Elfe(int PV, int degatsDeBase, int niveau, std::string nom, Element element) : Personnage(PV, degatsDeBase, niveau, nom, element)
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