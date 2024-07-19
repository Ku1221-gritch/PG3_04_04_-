#pragma once

class IShape 
{
public:
	//�R���X�g���N�^�i�錾�j
	virtual void Initialize() = 0;
	//�f�X�g���N�^�i�錾�j
	virtual ~IShape();

	virtual void Size();

	virtual void Draw();

protected://�����o�ϐ�
	//��
	float verticalSide;
	float widthSide;
	//���a
	float radius;
	//�~����
	float Pi;
	//����
	float rectangleAnswer;
	float circleAnswer;
};