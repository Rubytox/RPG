#include <iostream>
#include "LivingEntity.hpp"

using namespace std;

// CONSTRUCTEURS
LivingEntity::LivingEntity() : m_PV(100), m_degatsDeBase(10), m_niveau(1), m_nom("Nom par defaut"), m_element(NEUTRE)
{
}
LivingEntity::LivingEntity(int PV, int degatsDeBase, int niveau, string nom, Element element) : m_PV(PV), m_degatsDeBase(degatsDeBase), m_niveau(niveau), m_nom(nom), m_element(element)
{
}

// DESTRUCTEUR
LivingEntity::~LivingEntity()
{
}

// -------------------------------------------------------------------------------------------------------------------------------------------------------
// METHODES

void LivingEntity::attaquer(LivingEntity &cible) const
{
    // Inflige à la cible les dégats correspondants.
	if (cible.getElement() == NEUTRE || m_element == NEUTRE)
	{
		cible.recevoirDegats(m_degatsDeBase);
	}
	else if ((cible.getElement() == VENT && m_element == TERRE) || (cible.getElement() == TERRE && m_element == EAU) || (cible.getElement() == EAU && m_element == FEU) || (cible.getElement() == FEU && m_element == VENT))
	{
		cible.recevoirDegats(m_degatsDeBase / 3);
	}
	else if ((cible.getElement() == TERRE && m_element == VENT) || (cible.getElement() == EAU && m_element == TERRE) || (cible.getElement() == FEU && m_element == EAU) || (cible.getElement() == VENT && m_element == FEU))
	{
		if ((cible.getNiveau() > m_niveau - 2) && (cible.getNiveau() < m_niveau + 2))
		{
			cible.recevoirDegats(m_degatsDeBase * 3);
		}
		else if (cible.getNiveau() < m_niveau - 2)
		{
			cible.recevoirDegats(m_degatsDeBase * m_niveau);
		}
		else if (cible.getNiveau() > m_niveau + 2)
		{
			cible.recevoirDegats(m_degatsDeBase * 3 - m_niveau);
		}
	}
}

void LivingEntity::recevoirDegats(int nbDegats)
{
	m_PV -= nbDegats; // On enlève le nombre de dégâts infligé à la vie de l'entité

	if (m_PV < 0) // Si les points de vie de la cible descendent en dessous de 0, on les remet à 0
		m_PV = 0;
}

void LivingEntity::recevoirPV(int nbPV)
{
	m_PV += nbPV;

	if (m_PV > 0)
		m_PV = 0;

	// Voir LivingEntity::recevoirDegats pour plus d'informations
}

bool LivingEntity::vivant() const // Retourne true si le personnage est vivant (m_PV > 0) et false sinon
{
	if (m_PV > 0)
		return true;
	else
		return false;
}

void LivingEntity::sePresenter() const
{
	if (vivant())
	{
		cout << "Bonjour ! Je suis une entité me nommant " << m_nom << "! Je suis niveau " << m_niveau << ", j'ai " << m_PV << " points de vie, et j'inflige " << m_degatsDeBase << " points de dégâts de base." << endl;
		switch (m_element)
		{
		case NEUTRE:
			cout << "Je suis neutre " << endl;
			break;
		case VENT:
			cout << "Je suis vent " << endl;
			break;
		case TERRE:
			cout << "Je suis terre " << endl;
			break;
		case EAU:
			cout << "Je suis eau " << endl;
			break;
		case FEU:
			cout << "Je suis feu " << endl;
			break;
		default:
			cout << "Elément non trouvé" << endl;
			break;
		}
	}
	else
	{
		cout << m_nom << " est mort(e) !" << endl;
	}

}

int LivingEntity::getElement() const
{
	return m_element;
}

int LivingEntity::getNiveau() const
{
	return m_niveau;
}

string LivingEntity::getNom() const
{
	return m_nom;
}