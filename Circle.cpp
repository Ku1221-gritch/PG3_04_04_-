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
	printf("‰~‚Ì–ÊÏ‚ğ‹‚ß‚é®:‰~ü—¦*”¼Œa\n");
	circleAnswer = Pi * radius;
}

void Circle::Draw()
{
	printf("“š‚¦%f\n", circleAnswer);
}
