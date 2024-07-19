#pragma once
#include"IShape.h"

class Rectangle :public IShape
{
public:
	//コンストラクタ（宣言）
	virtual void Initialize() override;
	//デストラクタ（宣言）
	virtual ~Rectangle();

	void Size() override;

	void Draw() override;

};