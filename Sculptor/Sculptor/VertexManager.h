#pragma once
#include "Types.h"

class VertexManager
{
private:
	Vector <*Vertex> Vertexes;
	Queue <idtype> FreeSpaces;
public:
	VertexManager(void);
	idtype addVertex(vtype x, vtype y, vtype z, bool xyz=true);
	idtype delVertex(idtype id);
	~VertexManager(void);
};
