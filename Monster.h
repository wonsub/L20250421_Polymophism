#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	//생성자
	AMonster()
	{
	
		//cout << "몬스터 생성" << endl;
	}
	virtual ~AMonster();

	virtual void Tick() override;
	
	virtual void Move();
};

