#ifndef SORCIER_HPP
#define SORCIER_HPP

#include <vector>
#include "Elfe.hpp"
#include "Define.hpp"
#include "algos.hpp"
#include "Sort.hpp"

class Sorcier : public Elfe
{
public:
	Sorcier(int PV, int maxPV, int degatsDeBase, int niveau, std::string m_nom, Element element);

	void lancerSort(LivingEntity &cible, int idSort); // Lance un sort sur une entité quelconque
	void sePresenter() const;
	void soin(LivingEntity &cible); // Lance un sort de soin sur une entité quelconque

	bool sortDisponible(int idSort) const; // Vérifie si le Sorcier peut lancer un sort

	~Sorcier();
private:
	std::vector<Sort*> m_sorts;
};

#endif // SORCIER_HPP