#if !defined(__COLECTIE_H__)
#define __COLECTIE_H__

template <class TipElem= int>
class Colectie
{
	enum
	{
		DIMENSIUNE_COLECTIE = 3
	};

public:
	Colectie()
	{
		for(int i= 0;i< DIMENSIUNE_COLECTIE;i++)
		{
			_pozitiiLibere[i]= true;
		}
	}

	bool Adauga(TipElem elem);
	bool Elimina(TipElem *elem);

private:
	TipElem _elemente[DIMENSIUNE_COLECTIE];
	bool _pozitiiLibere[DIMENSIUNE_COLECTIE];
};

#endif