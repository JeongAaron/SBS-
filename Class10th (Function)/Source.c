#include <stdio.h> 

#include <stdarg.h>

#include "Calculator.h"

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
		return -1;
	}
}

int swap(int* left, int* right)
{
	int temporary = *left;

	*left = *right;

	*right = temporary;
}

inline void process(float progress)
{
	printf("progress : %f\n", progress);

	// �ζ��� �Լ��� ������ ������ Ȯ��Ǹ�,
	// ������ �� �ζ��� �Լ��� �����ϴ��� ��Ȳ�� ����
	// �Ϲ� �Լ��� ���ѵǱ⵵ �Ѵ�.
}

void recursive(int count)
{
	printf("recursive function : %d\n", count);

	count = count - 1;

	if (count > 0)
	{
		recursive(count);
	}
}

void dynamicfunction(int count, ...)
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������
	va_list list;

	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� ����
	va_start(list, count);

	for (int i = 0; i < count; i++)
	{
		// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �����´�.
		printf("%d ", va_arg(list, int));
	}

	printf("\n");

	// va_end : ���� �μ� �����Ͱ� ������ �� NULL�� �ʱ�ȭ �Ѵ�.
	va_end(list);
}

float (*fuctionPointer)(float, float);

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

	// int a = 10;

	// int b = 20;

	// int temporary = a;

	// a = b;

	// b = temporary;

	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);.

	// swap(&a, &b);

	// printf("a�� �� : %d\n", a);
	// printf("b�� �� : %d\n", b);

	// �μ��� ��� �Լ��� �ִ� �Ű� ������ ���� ���� ������ �� �ִ� �μ��� ���� �����Ǹ�,
	// ���� �����ϴ� �μ��� ���� ���޹޴� �Ű������� �ڷ����� ���� ��ġ�ؾ� �Ѵ�.

#pragma endregion

#pragma region �ζ��� �Լ�

	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� �Լ�

	// process(46.75f);

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó���ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������
	// ���� ������ ũ�Ⱑ Ŀ���� �ȴ�.

#pragma endregion

#pragma region ��� �Լ�

	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ�.

	//  recursive(5);

	// ��� �Լ��� �Լ��� ��� ȣ���ϱ� ������ ���� ������
	// �޸𸮰� ��� ���̰� �ǹǷ� ���� �����÷ο찡 �߻��ϰ� �ȴ�.

#pragma endregion

#pragma region ���� ���� �Ű� ����

	// �Ű� ������ ������ ���� ������ ��� ����
	// �������� �μ��� ���� �� �ֵ��� �����Ǿ� �ִ� �Ű� ����

	// dynamicfunction(1, 10, 20, 30);

#pragma endregion

#pragma region �Լ� ������

	// �Լ��� �ּ� ���� �����ϰ� ����ų �� �ִ� ����

	fuctionPointer = Add;

	printf("%f\n", fuctionPointer(5, 5));

	fuctionPointer = Subtract;

	printf("%f\n", fuctionPointer(5, 5));

	fuctionPointer = Multiply;

	printf("%f\n", fuctionPointer(5, 5));

	fuctionPointer = Divide;

	printf("%f\n", fuctionPointer(5, 5));

	// �Լ� �����ʹ� �Լ��� ��ȯ���� �Ű� ������ ���°� ��ġ�ؾ� �Ѵ�.

#pragma endregion

}