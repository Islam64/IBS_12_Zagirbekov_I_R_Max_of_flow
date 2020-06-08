#pragma once

using namespace sf;
using namespace std;

class Link {
public:
	int M; //идентификатор ребра
	Node A, B; //концы ребра
	int F; //ВЕС ребра
};