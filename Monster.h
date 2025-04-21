#pragma once
#include "Actor.h"

class AMonster : public AActor
{
public:
	//积己磊
	AMonster()
	{
	
		//cout << "阁胶磐 积己" << endl;
	}
	virtual ~AMonster();

	virtual void Tick() override;
	
	virtual void Move();
};

