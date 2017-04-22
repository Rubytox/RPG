﻿#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

#include "LivingEntity.hpp"
#include "Enemy.hpp"
#include "Personnage.hpp"
#include "Sorcier.hpp"
#include "Guerrier.hpp"
#include "Renard.hpp"

using namespace std;

int main()
{
	srand((unsigned int)time(0)); // Initialisation des nombres aléatoires
		
	Sorcier sorcier1(100, 100, 20, 1, "Luke", FEU);
	Sorcier sorcier2(100, 100, 20, 1, "Dark Vador", EAU);

	sorcier1.sePresenter();
	cout << "-----" << endl;
	sorcier2.sePresenter();

	cout << endl << "-----" << endl << endl;

	sorcier1.lancerSort(sorcier2, 0);
	sorcier2.lancerSort(sorcier1, 42);

	cout << endl << "-----" << endl << endl;

	sorcier1.sePresenter();
	cout << "-----" << endl;
	sorcier2.sePresenter();

	cin.get();
	return 0;
}
