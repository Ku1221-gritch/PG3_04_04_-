#include<stdio.h>
#include "Circle.h"

void Circle::Initialize()
{
	radius = 5.0f;
	Pi = 3.14f;
}

Circle::~Circle()
{

}

void Circle::Size()
{
	printf("�~�̖ʐς����߂鎮:�~����*���a\n");
	circleAnswer = Pi * radius;
}

void Circle::Draw()
{
	printf("����%f\n", circleAnswer);
}
