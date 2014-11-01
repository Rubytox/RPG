#ifndef SORCIER_HPP
#define SORCIER_HPP

#include <vector>
#include "Elfe.hpp"

class Sorcier : public Elfe
{
public:
	Sorcier(int PV, int degatsDeBase, int niveau, std::string m_nom, Element element);

	void lancerSort(LivingEntity &cible, Sorts sort); // Lance un sort sur une entit� quelconque
	void sePresenter() const;
	//void soin(LivingEntity &cible); // Lance un sort de soin sur une entit� quelconque

	~Sorcier();
private:
	vector<Sorts> m_sorts;
};

#endif // SORCIER_HPP