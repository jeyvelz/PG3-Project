#pragma once

//基底クラス
class Animal {
public:
	//コンストラクタ
	Animal();
	//デストラクタ（仮想関数）
	virtual ~Animal();
	//鳴き声（仮想関数）
	virtual void Cry();

};
