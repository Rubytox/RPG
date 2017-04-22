#include "Sort.hpp"

using namespace std;

Sort::Sort(string nom, int puissance, int niveauRequis) : m_nom(nom), m_puissance(puissance), m_niveauRequis(niveauRequis), m_ID(-1)
{

}

Sort::~Sort()
{}

int Sort::getID() const
{
	return m_ID;
}

string Sort::getNom() const
{
	return m_nom;
}

int Sort::getPuissance() const
{
	return m_puissance;
}

BouleDeFeu::BouleDeFeu(std::string nom, int puissance, int niveauRequis) : Sort(nom, puissance, niveauRequis)
{
	m_ID = 0;
}

int BouleDeFeu::getID() const
{
	return m_ID;
}

BouleDeFeu::~BouleDeFeu()
{

}

//

BouleDeGlace::BouleDeGlace(std::string nom, int puissance, int niveauRequis) : Sort(nom, puissance, niveauRequis)
{
	m_ID = 1;
}

int BouleDeGlace::getID() const
{
	return m_ID;
}

BouleDeGlace::~BouleDeGlace()
{

}

//

BouleDeFoudre::BouleDeFoudre(std::string nom, int puissance, int niveauRequis) : Sort(nom, puissance, niveauRequis)
{
	m_ID = 2;
}

int BouleDeFoudre::getID() const
{
	return m_ID;
}

BouleDeFoudre::~BouleDeFoudre()
{

}