#include <stdio.h> 

void main()
{
#pragma region �ּ� ������

	// ������ �ּ� ���� ��ȯ�ϴ� ������

	// int data = 110;

	// printf("data ���� �ּ� : %p\n", &data);

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ��ϸ�,
	// �޸� ������ 1 byte�� ũ��� ������ ǥ��

#pragma endregion

#pragma region scanf �Լ�

	// ǥ�� �Է� �Լ���, ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ�

	// int score = 0;

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ ���� �۾����� �Ѿ �� ����.

	// scanf_s("%d", &score);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ ����

	// printf("sorce ������ �� : %d\n",  score);

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� �����͸� �����Ͽ��ٰ�
	// �Է��ϴ� ���� ���� ���� ������ ���α׷��� ����

#pragma endregion

#pragma region Star

	 // int star = 0;

	 // printf("�Է��ϼ���.");

	 // scanf_s("%d", &star);

	 // for (int i = 1; i <= star; ++i)
	 // {
	 // 	for (int j = 1; j <= i; ++j)
	 // 	{
	 // 		printf("*");
	 // 	}
	 // 	printf("\n");
	 // }

#pragma endregion

#pragma region ������

	// �޸��� �ּ� ���� ������ �� �ִ� ����

	// int x = 10;

	// int * pointer = &x;

	// *pointer = 99;

	// printf("x ������ �� : %d\n", x);

	// printf("pointer ������ �� : %p\n", pointer);

	// printf("x ������ �ּ� �� : %p\n", &x);

	// printf("pointer �ּ� �� : %p\n", &pointer);

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ �ּҸ� �����ϰ� �Ǹ�
	// �ش� ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	// float health = 100.0f;

	// pointer = &health;

	// *pointer = 15.5f;

	// printf("health ������ �� : %f\n", health);

	// ������ ������ �����ϱ� ���� �ּ� ���� ������ ������ �ڷ�����
	// ������ ������ �ڷ����� ��ġ�ؾ� �Ѵ�.

	// printf("������ ������ ũ�� : %d\n", sizeof(pointer));

	// ������ ������ ũ��� �߾� ó�� ��ġ��
	// �ѹ��� ó���� �� �ִ� ũ��� ��������,
	// �� ���� ó���� �� �մ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

#pragma region ���� ������

	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� ������

	// void* p = NULL;

	// char charactor = 'A';

	// int integer = 10;

	// float decimal = 5.5f;

	// p = &charactor;

	// printf("p ������ �� : %c\n", *(char*)p);

	// *(char*)p = 'B';

	// printf("����� p ������ �� : %c\n", *(char*)p);

	// printf("\n");

	// p = &integer;

	// printf("p ������ �� : %d\n", *(int*)p);

	// *(int*)p = 15;

	// printf("����� p ������ �� : %d\n", *(int*)p);

	// printf("\n");

	// p = &decimal;

	// printf("p ������ �� : %f\n", *(float*)p);

	// *(float*)p = 3.25f;

	// printf("����� p ������ �� : %f\n", *(float*)p);

	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� ����.
	// 
	// ���� �����ͷ� ������ �޸𸮿� �����Ϸ��� ���� �����Ͱ� ����Ű�� ������
	// �ڷ������� �� ��ȯ�� ����� �Ѵ�.

#pragma endregion

#pragma region ��� ���� ������

	// int vectorX = 10;

	// int vectorY = 20;

	// const int* ptr = &vectorX;

	// printf("ptr ������ ����Ű�� �� : %d\n", *ptr);

	// *ptr = 99;(�Ұ���)

	// ptr = &vectorY;

	// printf("ptr ������ ����Ű�� �� : %d\n", *ptr);

	// ��� ���� �����͸� �����ϰ� �Ǹ� ������ ������ ����Ű�� �ִ� �ּҿ�
	// �����ϴ� ���� ������ �� ������ ������ �� �ִ�.

#pragma endregion

#pragma region ������ ���

	// int positionX = 5;

	// int positionY = 0;

	// int* const reference = &positionX;

	// *reference = 10;

	// reference = &positionY;(�Ұ���)

	// ������ ����� �ش� ������ ���� ������ �� ������
	// �ٸ� �޸� �ּҸ� ������ �� �����ϴ�.

#pragma endregion

}