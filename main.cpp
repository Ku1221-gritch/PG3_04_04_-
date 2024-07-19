#include<stdio.h>
#include"IShape.h"
#include"Rectangle.h"
#include"Circle.h"

int main() 
{
	IShape* Ishape[2];

	Ishape[0] = new Rectangle;//‹éŒ`
	Ishape[1] = new Circle;//‰~

	for (int i = 0; i < 2; i++) {
		Ishape[i]->Initialize();
		Ishape[i]->Size();
		Ishape[i]->Draw();
	}
	delete* Ishape;

	return 0;
}