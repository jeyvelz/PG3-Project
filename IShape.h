#pragma once

//���N���X
class IShape {
public:
	
	IShape();
	~IShape();

	//�ʐς�����(�������z�֐��E���ۃN���X)
	virtual void Size() = 0;

	//�ʐς̒l��\��(�������z�֐��E���ۃN���X)
	virtual void Draw() = 0;
};
