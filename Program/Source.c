#include <stdio.h> 

void main()
{

#pragma region �迭

	// ���� �ڷ����� ������� �̷���� ���� ����
	
	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �ȴ�.
	
	int array[3];

	printf("array �ڷ����� ũ�� : %u\n", sizeof(array));

	int size = sizeof(array) / sizeof(int);

	for (int y = 0; y <= size - 1; y++)
	{
		array[y] = (y + 1) * 10;
	}

	for (int i = 0; i <= size-1; i++)
	{
		printf("aaray[%d] = %d\n", i, array[i]);
	}

	// �迭�� ��� ù ��° ���Ҵ� 0���� ����

#pragma endregion


}