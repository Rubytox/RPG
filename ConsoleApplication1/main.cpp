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

	srand(time(0)); // Initialisation des nombres aléatoires
	//Enemy personnage1(100, 20, 1, "Ennemi 1", VENT, false), personnage2(50, 10, 5, "Ennemi 2", FEU, true);

	/*personnage1.sePresenter();
	personnage2.sePresenter();

	cout << "--------------" << endl;

	personnage1.attaquer(personnage2);
	personnage2.attaquer(personnage1);
	personnage1.sePresenter();
	personnage2.sePresenter();

	cout << "--------------" << endl;

	personnage1.recevoirDegats(500);
	personnage1.sePresenter();
	personnage2.sePresenter();

	cout << "--------------" << endl;

	cout << boolalpha;
	cout << "Personnage 1 vivant : " << personnage1.vivant() << endl;
	cout << "Personnage 2 vivant : " << personnage2.vivant() << endl;
	cout << noboolalpha; */
	
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
