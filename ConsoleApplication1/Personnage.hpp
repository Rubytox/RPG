#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include "LivingEntity.hpp"

class Personnage : public LivingEntity
{
public:
	Personnage(int PV, int degatsDeBase, int niveau, std::string nom, Element element);

	void setExp(); // Modifie les points d'expérience du personnage (lorsqu'il tue un ennemi par exemple ou accomplit une quête)
	void sePresenter() const;

	~Personnage();
protected:
	int m_exp; // Indique les points d'expérience du personnage
	int m_expRequis; // Indique les points d'expérience requis pour passer au niveau supérieur
	
	int m_degatsFeu; // Dégâts sur les différents éléments
	int m_degatsVent;
	int m_degatsEau;
	int m_degatsTerre;

	Element m_element;

};

#endif // PERSONNAGE_HPP