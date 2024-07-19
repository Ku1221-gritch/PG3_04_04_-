#pragma once

class IShape 
{
public:
	//コンストラクタ（宣言）
	virtual void Initialize() = 0;
	//デストラクタ（宣言）
	virtual ~IShape();

	virtual void Size();

	virtual void Draw();

protected://メンバ変数
	//辺
	float verticalSide;
	float widthSide;
	//半径
	float radius;
	//円周率
	float Pi;
	//答え
	float rectangleAnswer;
	float circleAnswer;
};