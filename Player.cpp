#include "Player.h"
#include <iostream>
#include <conio.h>>

using namespace std;
int KeyCode;

APlayer::APlayer()
{
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	Move();
}

void APlayer::Move()
{
	//cout << "걷는다" << endl;
	
}

void APlayer::Input()
{
	KeyCode = _getch(); //Device에서 입력 신호 캐치
}
