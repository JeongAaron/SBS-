#include <stdio.h> 

void main()
{

#pragma region �ݺ���

	// ���α׷� ������ Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ�

#pragma region ���� ������

	// �ǿ����ڸ� �ϳ��� ������ų �� ����ϴ� ������

	// int x = 0;
	// int vectorX = ++x;

	// printf("���� ������ x�� �� : %d\n", x); // x = 1
	// printf("vectorX�� �� : % d\n",vectorX); // vectorX = 1

	// vectorX = --x;

	// printf("���� ������ x�� �� : %d\n", x); // x = 0
	// printf("vectorX�� �� : % d\n", vectorX); //  vectorX = 0

	// ���� ���� �����ڴ� ������ ���� ������Ų �Ŀ� ������ ����

	// int y = 0;
	// int vectorY = y++;

	// printf("���� ������ y�� �� : %d\n", y); // y = 1
	// printf("vectorY�� �� : % d\n", vectorY); // vectorY = 0

	// vectorY = y--;

	// printf("���� ������ y�� �� : %d\n", y); // y = 0
	// printf("vectorY�� �� : % d\n", vectorY); //  vectorY = 1

	// ���� ���� �����ڴ� ������ ������ ���� ������ ���� ������Ų��.

#pragma endregion

#pragma region for ��(�ʱ��; ���ǽ�; ������){������ ����}

	// for (int i = 0; i < 5; i++)
	// {
	// 		printf("Hello\n");
	// }

	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� Ƚ����ŭ �ݺ��ϴ� �ݺ���

	// for ���� ��� ������ ������ ���¿� �ݴ�� �ʽ��� �����ϰ� �Ǹ�
	// ������ ��ġ���� �ʾ� ��� �ݺ������� ����Ǵ� ������ �߻�

#pragma endregion

#pragma region while ��(����){������ ���� (������ �ǵ��� �����������)}

	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ���

	//int count = 1;

	//while (count <=5)
	//{
	//	printf("%d\n", count);
	//	count++;
	//}

	// while ���� ��� ������ �Ʒ��� ����Ǹ�,
	// �Ʒ��� �ִ� ��ɹ��� ������ �� ������
	// �ٽ� ���� �ִ� ��ɹ����� ���ư��� �����մϴ�.

#pragma endregion

#pragma region do while ��

	// ���ǰ� ������� �� ���� �۾��� ������ ����
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ���

	// int connection = 0;

	// do
	// {
	// 	printf("Connection...");
	// } 
	// while (connection > 0);

#pragma endregion

#pragma region continue ��

	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ���

	// for (int i = 1; i <= 10; i++)
	// {
	// 	if (i % 3 == 0)
	// 	{
	// 		continue;
	// 	}
	// 	printf("%d\n", i);
	// }

#pragma endregion

#pragma region ���� �� ���

	// ����� �����ϴ� ���߿� ����� �̹� Ȯ���� ���
	// ������ ����ϴ� ������ �����ϴ� ��

	// int x = 0;
	// int y = 0;
	// int z = 0;

	// if (x == 0 && ++y)
	// {
	// 	printf("short circuit\n");
	// }

	// printf("%d\n", y);
	// 
	// if (z == 0 || y++)
	// {
	// 	printf("OR Operator");
	// }

	// printf("y�� �� : %d\n", y);

#pragma endregion

#pragma region (2)�� for��

	// for (int i = 0; i < 3; ++i)
	// {
	// 	  printf("i�� ���� : %d\n", i);
	// 	  for (int j = 0; j < 3; ++j)
	// 	  {
	// 		  printf("j�� ���� : %d\n", j);
	// 	  }
	// }

#pragma endregion

#pragma endregion

}