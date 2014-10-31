#ifndef LIVINGENTITY_HPP
#define LIVINGENTITY_HPP

#include <string>
#include "Define.hpp"

/**
 * Classe LivingEntity
 * ===================
 * Classe mère de toutes les entités vivantes du jeu (personnages, ennemis, PNJ...)
 **/

class LivingEntity
{
public:
	LivingEntity(); // Constructeur par défaut
	LivingEntity(int PV, int degatsDeBase, int niveau, std::string m_nom, Element element); // Constructeur << complet >>

	void attaquer(LivingEntity &cible) const; // Méthode pointant sur une entité. Appelle recevoirDegats
	void recevoirDegats(int nbDegats); // Méthode diminuant la valeur de l'attribut m_PV
	void recevoirPV(int nbPV); // On rajoute des PV à l'entité
	bool vivant() const; // Renvoie un l'état de l'entité (morte / vivante)
	void sePresenter() const; // DEBUG --> affiche des informations sur le personnage

	int getElement() const;
	int getNiveau() const;
	std::string getNom() const;

	~LivingEntity(); // Destructeur
protected:
	int m_PV; // Points de vie de l'entité
	int m_degatsDeBase; // Dégâts de base pouvant être infligés à une autre entité
	int m_niveau; // Niveau de l'entité
	Element m_element; // Indique l'élement de l'entité

	std::string m_nom; // Nom de l'entité
};

#endif // LIVINGENTITY_HPP