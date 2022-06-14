
#pragma once

using namespace std;
/*
* Actor Ŭ����
* priveate : ��� ���� : MoveType mType - �ʱⰪ : MoveType::Right
* priveate : int x = 0  (�ʱⰪ)
* priveate : int z = 0  (�ʱⰪ)
* function (�Լ�)
* void Tick();  main() �Լ��� while ���ȿ��� ȣ���� ����
* viod printLocation();  "(x = x, z = z) << �̷��� ���
*/

enum class MoveType
{
	Right, Up, Left, Down
};

class Actor
{
	int x;
	int z;
	MoveType mType;

public:
	Actor();

	void Tick();
	void PrintLocation();

};

