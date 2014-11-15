#ifndef SORCIER_HPP
#define SORCIER_HPP

#include <vector>
#include "Elfe.hpp"
#include "Define.hpp"
#include "algos.hpp"

class Sorcier : public Elfe
{
public:
	Sorcier(int PV, int degatsDeBase, int niveau, std::string m_nom, Element element);

	void lancerSort(LivingEntity &cible, Sorts sort); // Lance un sort sur une entité quelconque
	void sePresenter() const;
	void soin(LivingEntity &cible); // Lance un sort de soin sur une entité quelconque

	bool sortDisponible(Sorts sort) const; // Vérifie si le Sorcier peut lancer un sort

	~Sorcier();
private:
	std::vector<Sorts> m_sorts;
};

#endif // SORCIER_HPP