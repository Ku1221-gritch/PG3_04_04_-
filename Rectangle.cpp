#include<stdio.h>
#include "Rectangle.h"

void Rectangle::Initialize()
{
	verticalSide = 10.0f;
	widthSide = 5.0f;
}

Rectangle::~Rectangle()
{

}

void Rectangle::Size()
{
	printf("長方形の面積を求める式:辺*辺\n");
	rectangleAnswer = verticalSide * widthSide;
}

void Rectangle::Draw()
{
	printf("答え%f\n", rectangleAnswer);
}
