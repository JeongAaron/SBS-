#include <stdio.h> 

int count;

int stage = 1;

void clear()
{
	stage += 1;
}

void increase()
{
	static int score = 0; // ������ �ܺο��� ������� ���ϵ��� ��ȣ�ϱ� ���Ͽ� �Լ� �ȿ��� ���� -> ĸ��ȭ

	score++;
	
	printf("score : %d\n", score);
}

void main()
{

#pragma region �޸�
	
	//     ------------------------------
	//     |            CODE            |
	//     ------------------------------
	//     |            DATA            |
	//     
	//     |Initialize Globle | .rodata |
	//     ------------------------------
	//     |            BSS             |
	//     ------------------------------
	//     |            HEAP            |
	//     ------------------------------
	//     |            STACK           |
	//     ------------------------------

#pragma region CODE ����

	// ���μ����� ������ �ڵ�� ��ũ�� ����� ��� ���·� ����Ǵ� ����

#pragma endregion

#pragma region DATA ����

	// ���� ������ ���� ������ ����Ǵ� ����

#pragma endregion

#pragma region BSS ����

	// �ʱ�ȭ���� ���� ���� ������ ����Ǵ� ����

#pragma endregion

#pragma region STACK ����

	// �Լ��� ȣ��� ����Ǵ� ���� ������ �Ű� ������ ����Ǵ� ����

#pragma endregion

#pragma region HEAP ����

	// ����ڰ� ���� �Ҵ��ϴ� �޸� ����

#pragma endregion

#pragma endregion

#pragma region ���� ����

	// �Լ� ���ο� ����� ������, �Լ� ���ο����� ��� �����ϸ�,
	// { } ����� �������� �޸𸮰� �����Ǵ� Ư¡�� ������ �ִ� ����

	// int x = 10;
	// {
	// 		int x = 20;
	//		printf("%d", x);
	// }
	
	// printf("%d", x);

#pragma endregion

#pragma region ���� ����
	
	// �Լ� �ܺο����� ������ �����ϸ�,
	// ���α׷��� ����� �� �޸𸮿��� �����ǰ�,
	// ���α׷��� ����Ǿ�߸� �޸𸮿��� ������� Ư¡�� ���� ����

	// clear();
	// clear();
	// clear();

	//printf("stage�� �� : %d\n", stage);
	
	//printf("count�� �� : %d\n", count);

#pragma endregion

#pragma region ���� ����

	// ���� ������ ���� ������ Ư���� ���ÿ� ������ ������,
	// ���α׷��� ����� �� �� �ѹ��� �ʱ�ȭ�� �̷������,
	// ���α׷��� ����� �� �޸𸮿� �����ǰ� ���α׷��� ���� �Ǿ�߸�
	// �޸𸮿��� �����Ǵ� Ư¡�� ������ �ִ� ����

	// increase();
	// increase();
	// increase();

#pragma endregion
	
}