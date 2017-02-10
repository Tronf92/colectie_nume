#include "colectie.h"

template <class TipElem>
bool Colectie<TipElem>::Adauga(TipElem elem)
{
	bool ret;
	int poz;
	for(poz = 0;(poz < DIMENSIUNE_COLECTIE) && !_pozitiiLibere[poz];++poz);
	if(DIMENSIUNE_COLECTIE == poz)
	{
		ret = false;
	}
	else
	{
		_elemente[poz]= elem;
		_pozitiiLibere[poz]= false;
		ret = true;
	}

	return ret;

}

template<class TipElem>
bool Colectie<TipElem>::Elimina(TipElem *elem)
{
	bool ret;
	int poz;
	for(poz=0;(poz<DIMENSIUNE_COLECTIE) && _pozitiiLibere[poz];++poz);
	if(DIMENSIUNE_COLECTIE == poz)
	{
		ret = false;

	}

	else
	{
		*elem= _elemente[poz];
		_pozitiiLibere[poz]=true;
		ret = true;
	}
	return ret;

}

