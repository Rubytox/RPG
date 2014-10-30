#include "Humain.hpp"
#include <iostream>

using namespace std;

Humain::Humain(int PV, int degatsDeBase, int niveau, std::string nom, Element element) : Personnage(PV, degatsDeBase, niveau, nom, element)
{

}

Humain::~Humain()
{

}

void Humain::sePresenter() const
{
	Personnage::sePresenter();
	std::cout << "Je suis un humain !" << endl;
}