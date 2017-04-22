#ifndef ALGOS_HPP
#define ALGOS_HPP

#include <vector>
#include "Define.hpp"

/*
 * inVector
 * --------
 * Renvoie un booléen si tab contient occurence
 */
template<typename T>
bool inVector(std::vector<T> tab, T occurence)
{
	for (std::vector<T>::iterator it = tab.begin(); it != tab.end(); ++it)
	{
		if (*it == occurence)
			return true;
	}
	return false;
}

#endif // ALGOS_HPP