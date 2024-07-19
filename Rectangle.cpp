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
	printf("’·•ûŒ`‚Ì–ÊÏ‚ğ‹‚ß‚é®:•Ó*•Ó\n");
	rectangleAnswer = verticalSide * widthSide;
}

void Rectangle::Draw()
{
	printf("“š‚¦%f\n", rectangleAnswer);
}
