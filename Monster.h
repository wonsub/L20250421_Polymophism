#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	//������
	AMonster()
	{
	
		//cout << "���� ����" << endl;
	}
	virtual ~AMonster();

	virtual void Tick() override;
	
	virtual void Move();
};

