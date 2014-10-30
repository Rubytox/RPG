#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "LivingEntity.hpp"

/**
* Classe Enemy
* ============
* Classe mère de toutes les entités vivantes ennemies du joueur (monstres)
**/

class Enemy : public LivingEntity
{
public:
	Enemy();
	Enemy(int PV, int degatsDeBase, int niveau, std::string nom, Element element, bool hostile);

	void sePresenter() const;

	~Enemy();
protected:
	bool m_hostile; // Indique si l'ennemi attaque à vue ou non
};

#endif // ENEMY_HPP