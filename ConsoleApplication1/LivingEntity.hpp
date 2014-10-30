#ifndef LIVINGENTITY_HPP
#define LIVINGENTITY_HPP

#include <string>
#include "Define.hpp"

/**
 * Classe LivingEntity
 * ===================
 * Classe m�re de toutes les entit�s vivantes du jeu (personnages, ennemis, PNJ...)
 **/

class LivingEntity
{
public:
	LivingEntity(); // Constructeur par d�faut
	LivingEntity(int PV, int degatsDeBase, int niveau, std::string m_nom, Element element); // Constructeur << complet >>

	void attaquer(LivingEntity &cible) const; // M�thode pointant sur une entit�. Appelle recevoirDegats
	void recevoirDegats(int nbDegats); // M�thode diminuant la valeur de l'attribut m_PV
	bool vivant() const; // Renvoie un l'�tat de l'entit� (morte / vivante)
	void sePresenter() const; // DEBUG --> affiche des informations sur le personnage

	int getElement() const;
	int getNiveau() const;
	std::string getNom() const;

	~LivingEntity(); // Destructeur
protected:
	int m_PV; // Points de vie de l'entit�
	int m_degatsDeBase; // D�g�ts de base pouvant �tre inflig�s � une autre entit�
	int m_niveau; // Niveau de l'entit�
	Element m_element; // Indique l'�lement de l'entit�

	std::string m_nom; // Nom de l'entit�
};

#endif // LIVINGENTITY_HPP