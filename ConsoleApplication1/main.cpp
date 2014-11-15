#include <iostream>
#include <ctime>
#include <cstdlib>

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
		
	Sorcier sorcier(100, 20, 1, "Sorcier", FEU);
	Renard renard(100, 20, 1, "Renard", VENT, false);

	sorcier.sePresenter();
	renard.sePresenter();
	
	cout << "--------" << endl;

	sorcier.lancerSort(renard, BOULE_DE_FEU);
	sorcier.lancerSort(renard, BOULE_DE_GLACE);
	sorcier.lancerSort(renard, BOULE_DE_FOUDRE);
	sorcier.lancerSort(renard, BOULE_DE_GLACE);
	sorcier.lancerSort(renard, BOULE_DE_FEU);
	renard.griffer(sorcier);
	sorcier.sePresenter();
	renard.sePresenter();

	cout << "------" << endl;

	cin.get();
	return 0;
}
