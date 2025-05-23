#pragma once

//基底クラス
class IShape {
public:
	
	IShape();
	~IShape();

	//面積を求め(純粋仮想関数・抽象クラス)
	virtual void Size() = 0;

	//面積の値を表示(純粋仮想関数・抽象クラス)
	virtual void Draw() = 0;
};
