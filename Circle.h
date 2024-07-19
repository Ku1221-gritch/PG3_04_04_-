#pragma once
#include"IShape.h"

class Circle:public IShape
{
public:
	//コンストラクタ（宣言）
	virtual void Initialize() override;
	//デストラクタ（宣言）
	virtual ~Circle();

	void Size() override;

	void Draw() override;

};