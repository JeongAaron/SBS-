#include <stdio.h> 

#include <stdlib.h>

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

#pragma region ���� �Ҵ�(malloc)

	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾�

	// int* reference = (int*)malloc(sizeof(int));

	// *reference = 100;

	// printf("%d\n", *reference);

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	// �������� �޸��� ũ�⸦ �Ҵ��� �� ����Ʈ ������ �����Ѵ�.

	// free(reference);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�,
	// ����� ������ ���� ���� ���־�� �Ѵ�.

#pragma endregion

#pragma region ��� ������

	// �̹� ������ �޸� ������ ����Ű�� ������

	// float* pointer = malloc(sizeof(float));

	// *pointer = 37.5f;

	// printf("%f\n", *pointer);

	// free(pointer);

	// pointer = NULL;

	// printf("%f\n", *pointer);

	// *pointer = 12.5f;

#pragma endregion

#pragma region ���� �迭(calloc)

	// int* ptr = calloc(3, sizeof(int));

	// printf("ptr�� �� : %p\n", ptr);

	// for (int i = 0; i < 3; i++)
	// {
	//	  ptr[i] = (1 + i) * 10;

	//	  printf("ptr[%d] = %d\n", i, ptr[i]);
	// }

	// free(ptr);

	// ptr = calloc(5, sizeof(int)); // �ּҰ��� ���� �� ������ X

	// printf("ptr�� �� : %p\n", ptr);

	// for (int i = 0; i < 5; i++)
	// {
	// 	  ptr[i] = (1 + i) * 10;

	//    printf("ptr[%d] = %d\n", i, ptr[i]);
	// }

	// free(ptr);

	// ptr = NULL;

#pragma endregion

}