
#pragma once

using namespace std;
/*
* Actor 클래스
* priveate : 멤버 변수 : MoveType mType - 초기값 : MoveType::Right
* priveate : int x = 0  (초기값)
* priveate : int z = 0  (초기값)
* function (함수)
* void Tick();  main() 함수에 while 문안에서 호출할 예정
* viod printLocation();  "(x = x, z = z) << 이렇게 출력
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

