#include "Boar.h"
#include <iostream>

using namespace std;

ABoar::ABoar()
{
}

ABoar::~ABoar()
{
}

void ABoar::Tick()
{
	Move();
}

void ABoar::Move()
{
	cout << "���̹ڴ´�" << endl;
}
