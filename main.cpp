
#include <iostream>
#include <Windows.h>
#include "Actor.h"

using namespace std;

// �Լ� �̸� : printTo100
// ���� : 0~100���� ���
// �Է°� : ����
// ��°� : ����
void printTo100()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 100; ++i)
	{
		number[i] = i;
		cout << number[i] << endl;
	}
}
// �Լ� �̸� : printToEven
// ���� : 0~100���� ¦�� ���
// �Է°� : ����
// ��°� : ����
void printToEven()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 50; ++i)
	{
		// i     = 0,  1,  2, 3, 4,  5,   6,  7,  8,  9, 10...
		// i * 2 = 0,  2,  4, 6, 8, 10, 12, 14, 16,

		number[i] = i * 2;
		cout << number[i] << endl;
	}
}
// �Լ� �̸� : printToOdd
// ���� : 0~100���� Ȧ�� ���
// �Է°� : ����
// ��°� : ����
void printToOdd()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 50; ++i)
	{
		// i     = 0,  1,  2, 3, 4,  5,   6,  7,  8,  9, 10...
		// i * 2 = 0,  2, 4, 6, 8, 10, 12, 14, 16,
		// i * 2 + 1 = 1, 3, 5, 7, 9, 11, 13, 15, 17,

		number[i] = i * 2 + 1;
		cout << number[i] << endl;
	}
}
// �Լ� �̸� : printTo3Dra
// ���� : 0~100���� 3��� ���
// �Է°� : ����
// ��°� : ����
void printTo3Dra()
{
	int number[1000] = { 0 };

	//number�� 0~100���� 3�� ��� ���
	for (int i = 0; i < 34; ++i)
	{
		// i     = 0,  1,  2, 3, 4,  5,   6,  7,  8,  9, 10...
		// i * 2 = 0,  2,  4, 6, 8, 10, 12, 14, 16,

		number[i] = i * 3;
		cout << number[i] << endl;
	}
}
// �Լ� �̸� : printTo3multi
// ���� : 0~100���� 3�¼� ���
// �Է°� : ����
// ��°� : ����
void printTo3multi()
{
	int number[1000] = { 0 };

	for (int i = 0; i < 10; ++i)
	{
		number[i] = 1;
		// 3//1��, 3*3//2��, 3*3*3//3��, 3*3*3*3//4�� 
		for (int j = 0; j < i; ++j)// j�� i������ �����ϸ鼭 3�� �����ش�.
		{
			number[i] *= 3;
		}
		cout << number[i] << endl;
	}

	//// i0 = 3
	//// i1 = i0 * 3//i0=3
	//// i2 = i1 * 3//i1=9
	//// i3 = i2 * 3//i2=27
	//// i4 = i3 * 3//
	//// i5 = i4 * 3//
	//number[0] = 3;
	//for (int i = 1; i < 10; ++i)
	//{
	//	number[i] = number[i - 1] * 3;
	//	cout << number[i - 1] << endl;
	//}
}
// �Լ� �̸� : printToGogodan
// ���� : n�� ������ * 9 ���� ���
// �Է°� : int n
// ��°� : ����
void printToGogodan(int n)
{
	for (int i = 2; i <= 9; ++i)
	{
		int result = n * i;
		cout << n << " * " << i << " = " << result << endl;
	}
	/*
	// cout << number[i] << endl;
	// "2 * " << i << " = " <<  <<
	// 2 * 1 = 2
	// 2 * 2 = 4
	// 2 * 3 = 6
	// 2 * 4 = 8
	// 2 * 5 = 10
	// 2 * 6 = 12
	// 2 * 7 = 14
	// 2 * 8 = 16
	// 2 * 9 = 18
	for (int j = 2; j <= 9; ++j)
	{
		for (int i = 1; i <= 9; ++i)
		{
			int result = j * i;
			cout << j << " * " << i << " = " << result << endl;
		}
	}
	// ���� �ϳ��� �Է� �޾Ƽ�
	// �� ���ڿ� 2~9 ������ ���
	// 10�� �Է� �޾Ҵٰ� �Ѵٸ�
	// 10 * 1 = 10
	// 10 * 2 = 20
	// 10 * 3 = 30
	// 10 * 4 = 40
	// 10 * 5 = 50
	// 10 * 6 = 60
	// 10 * 7 = 70
	// 10 * 8 = 80
	// 10 * 9 = 90
	int a = { 0 };
	cin >> a;
	for (int i = 2; i <= 9; ++i)
	{
		int result = a * i;
		cout << a << " * " << i << " = " << result << endl;
	}
	*/
}
// �Լ� �̸� : printFactorial
// ���� : n!�� ���� ������� ��ȯ�Ѵ�.
// �Է°� : int n
// ��°� : int
int printFactorial(int n)
{
	int result = 1;
	for (int i = 1; i <= n; ++i)
	{
		result *= i;
	}

	return result;
}

int main()
{
	Actor actor;
	while (1)
	{
		system("cls");
		actor.PrintLocation();
		actor.Tick();

		//x�� Location X��� �����ϰ� +�������� ���ٰ� - �������� ���� �����̰� ������
		//bool IsMoveRight = true;
		//bool IsMoveUp = true;

				/*
			* ���� ��ǥ
			* (x = 0, z =0) > ������
			* (x = 20, z =0) > ����
			* (x = 20, z =20) > ����
			* (x = 0, z =20) > �Ʒ���
			*/

			//while (1)
			//{
			//	system("cls");
			//	cout << "( x = " << x << " , z = " << z << " )" << endl;

			//	if (IsMoveRight && IsMoveUp)
			//	{
			//		//���������� �̵�(+����)
			//		x++;
			//		if (x >= 20)
			//		{
			//			IsMoveRight = false;
			//		}
			//	}
			//	else if (!IsMoveRight && IsMoveUp)
			//	{
			//		//�������� �̵�(+����)
			//		z++;
			//		if (z >= 20)
			//		{
			//			IsMoveUp = false;
			//		}
			//	}
			//	else if (!IsMoveRight && !IsMoveUp)
			//	{
			//		//�������� �̵�(-����)
			//		x--;
			//		if (x <= 0)
			//		{
			//			IsMoveRight = true;
			//		}
			//	}
			//	else if (IsMoveRight && !IsMoveUp)
			//	{
			//		//�Ʒ������� �̵�(+����)
			//		z--;
			//		if (z <= 0)
			//		{
			//			IsMoveUp = true;
			//		}
			//	}

			//	Sleep(100);
			//}

		Sleep(100);
	}
}