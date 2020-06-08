#pragma once

using namespace sf;
using namespace std;

class Node { //вершина топологии
public:
	int N; //идентификатор вершины
	int x, y; //координаты вершины
	CircleShape* GraphicNodes;//точки

};