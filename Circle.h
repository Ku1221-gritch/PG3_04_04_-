#pragma once
#include"IShape.h"

class Circle:public IShape
{
public:
	//�R���X�g���N�^�i�錾�j
	virtual void Initialize() override;
	//�f�X�g���N�^�i�錾�j
	virtual ~Circle();

	void Size() override;

	void Draw() override;

};