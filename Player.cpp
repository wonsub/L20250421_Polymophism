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
	//cout << "�ȴ´�" << endl;
	
}

void APlayer::Input()
{
	KeyCode = _getch(); //Device���� �Է� ��ȣ ĳġ
}
