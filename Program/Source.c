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

	int score = 0;

	scanf_s("%d", &score);

	for (int i = score; i <= score; ++i)
	{
		for (int j = 0; j = i; ++j)
		{
			printf("* %c", j);
		}
		printf("%d");
	}

#pragma endregion


}