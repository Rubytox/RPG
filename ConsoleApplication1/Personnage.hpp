#ifndef PERSONNAGE_HPP
#define PERSONNAGE_HPP

#include "LivingEntity.hpp"

class Personnage : public LivingEntity
{
public:
	Personnage(int PV, int degatsDeBase, int niveau, std::string nom, Element element);

	void setExp(); // Modifie les points d'exp�rience du personnage (lorsqu'il tue un ennemi par exemple ou accomplit une qu�te)
	void sePresenter() const;

	~Personnage();
protected:
	int m_exp; // Indique les points d'exp�rience du personnage
	int m_expRequis; // Indique les points d'exp�rience requis pour passer au niveau sup�rieur
	
	int m_degatsFeu; // D�g�ts sur les diff�rents �l�ments
	int m_degatsVent;
	int m_degatsEau;
	int m_degatsTerre;

	Element m_element;

};

#endif // PERSONNAGE_HPP