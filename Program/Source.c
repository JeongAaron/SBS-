#include <stdio.h> 

void function()
{
	printf("Function...\n");
}

void position(int x, int y)
{
	printf("x�� �� : %d\n", x);
	printf("y�� �� : %d\n", y);
}

int compare(float x, float y)
{
	if (x < y)
	{
		return 1;
	}
	
	else if (x == y)
	{
		return 0;
	}

	else
	{
		return - 1;
	}
}

int swap(int *left, int *right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;

	
}

void main()
{

#pragma region �Լ�

	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ����
	// ���������� ����� �ڵ��� ����

	// function();

	// function();

	// function();

	// �Լ��� ��� �ڷ����� ��ȯ�ϴ� ���� ���°�
	// ��ġ���� ������ ���ϴ� ���� ���� �� ����.

#pragma endregion

#pragma region �Ű� ����

	// �Լ��� ���ǿ��� ���޹��� �μ���
	// �Լ� ���η� �����ϱ� ���� ����ϴ� ����

	// position(2, 3);

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// �Լ��� ����Ǹ� �޸𸮿��� �������.

	// printf("compare �Լ��� �� : %d\n", compare(5.75f, 8.125f));
	

	// �ϳ��� �Լ��� ���� �ٸ� �ڷ����� �Ű� ������ �Բ� ������ �� ������,
	// ���� ���� �Ű� ������ �����Ͽ� ����� �� �ִ�.

#pragma endregion

#pragma region �μ�

	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ��
	
	int a = 10;
	
	int b = 20;
	
	// int temporary = a;
	
	// a = b;
	
	// b = temporary;
	
	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);

	swap(&a, &b);

	printf("a�� �� : %d\n", a);
	printf("b�� �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ� �μ��� ���� �����Ǹ�,
	// ���� �����ϴ� �μ��� ���� ���޹޴� �Ű������� �ڷ����� ���� ��ġ�ؾ� �Ѵ�.

#pragma endregion

}