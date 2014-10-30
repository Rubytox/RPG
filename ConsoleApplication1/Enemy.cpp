#include <iostream>
#include "Enemy.hpp"

using namespace std;

// CONSTRUCTEURS
Enemy::Enemy() : LivingEntity(), m_hostile(false)
{
}

Enemy::Enemy(int PV, int degatsDeBase, int niveau, string nom, Element element, bool hostile) : LivingEntity(PV, degatsDeBase, niveau, nom, element), m_hostile(hostile)
{
}

// DESTRUCTEUR
Enemy::~Enemy()
{
}

// -------------------------------------------------------------------------------------------------------------------------------------------------------
// METHODES

void Enemy::sePresenter() const
{
	cout << endl;
	LivingEntity::sePresenter();
	if (vivant())
	{
		cout << "Je suis un ennemi du joueur !" << endl;
		cout << boolalpha << "Hostile ? : " << m_hostile << noboolalpha << endl;
		cout << endl;
	}
}