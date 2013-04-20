#pragma once
# include "Types.h"

class Vertex
{
private:
	vtype x, y, x; //sau deplasare, unghi, distanta fata de linie
	idtype id;

public:
	/**
	pozitia fata de axe sau fata de o margine, daca xyz=false
	*/
	Vertex(idtype id, vtype x, vtype y, vtype z, bool xyz=true);


	~Vertex(void);
};
