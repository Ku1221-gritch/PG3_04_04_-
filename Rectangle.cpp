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
	printf("�����`�̖ʐς����߂鎮:��*��\n");
	rectangleAnswer = verticalSide * widthSide;
}

void Rectangle::Draw()
{
	printf("����%f\n", rectangleAnswer);
}
