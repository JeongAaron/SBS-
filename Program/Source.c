#include <stdio.h> 

#pragma region ��ó����

	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� ����

	// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���ؼ� ó���Ǵ� �����̱� ������
	// ��ɹ� ���� ";"�� ������� �ʴ´�.

#pragma endregion


void main() 
{

#pragma region �Ǽ��� �����ϴ� ���

#pragma region ���� �Ҽ���

	// �Ҽ����� ��ġ�� �����Ͽ� �Ҽ����� ��ġ�� ��Ÿ���� ���

	// ���� �������� �����ο� �Ҽ����� ũ�Ⱑ �����Ƿ�,
	// ǥ���� �� �ִ� ������ �����Ǿ� �ִ�.

#pragma endregion

#pragma region �ε� �Ҽ���

	// �Ҽ����� ��ġ�� �������� �ʰ� �Ҽ����� ��ġ�� ��Ÿ���� ���

	// �����ο� �ִ� ��Ʈ �߿��� ���� ���ʿ� �ִ� ���� ǥ������ �ʴ´�.

#pragma endregion

#pragma region �Ǽ� ������ (10)������ (2)������ ��ȯ�ϴ� ����

	// 10���� �Ǽ� �κ��� 1.0�� �� ������ ��� 2�� ���� ����
	// ���� ����� ���� �κ��� ������ �Ʒ��� ����
	
	// float packet = 3.125f;
	// float pi = 3.14159265f;
	
	// printf("packet ������ �� : %f\n", packet);
	// printf("pi ������ �� : %.9f\n", pi);

	// ǥ�� ��� �Լ��� �Ҽ��� ����� �� 4byte ũ����
	// �Ǽ��� �ڷ����� �Ҽ��� ���� 6�ڸ������� ǥ���ϸ�,
	// 8byte ũ���� �Ǽ��� �ڷ����� �Ҽ��� ���� 15�ڸ������� ǥ��

#pragma endregion

#pragma endregion
	
#pragma region ���ǹ�

	// � ������ �־��� �� �ش� ���ǿ� ���� ������ �����ϵ��� �����ϴ� ��ɹ�

#pragma region ���迬����

	// �� ���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ���� ������.

	// int data1 = 10 > 5;
	// int data2 = 10 < 5;
	// int data3 = 10 >= 5;
	// int data4 = 10 <= 5;
	// int data5 = 10 == 5;
	// int data6 = 10 != 5;
	
	// printf("data1�� ��: %d\n", data1);
	// printf("data2�� ��: %d\n", data2);
	// printf("data3�� ��: %d\n", data3);
	// printf("data4�� ��: %d\n", data4);
	// printf("data5�� ��: %d\n", data5);
	// printf("data6�� ��: %d\n", data6);

	// ���� �����ڴ� ������ ���� �� 1 �̶�� ������ ��ȯ�Ǹ�,
	// ������ Ʋ�� �� 0 �̶�� ������ ��ȯ�ȴ�.

#pragma endregion

#pragma region if��

	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ���

	// int data1 = 0;
	// int data2 = 1;
 
	// if (data1 < data2)
	// {
	// 	printf("����Ͽ����ϴ�.\n");
	// }

#pragma endregion

#pragma region else if��

	// if ���� ������ Ʋ�� �� else if���� ������ �´ٸ� ����Ǵ� ���

	// char a1 = 10;
	
	// if (a1 < 1)
	// {
	// 	printf("A\n");
	// }
	// else if (a1 >= 10)
	// {
	// 	printf("B\n");
	// }
	// 
	// else if���� ���� ���� �����ϴ� ���� �����ϸ� if���� �������� ������ ����� �� ����.
	
#pragma endregion

#pragma region else��

	// if���� else if���� ������ �� Ʋ���� ����Ǵ� ��ɹ�

	// int a1 = 10;
	
	// if (a1 > 11)
	// {
	// 	printf("A\n");
	// }
	// else if (a1 > 10)
	// {
	// 	printf("B\n");
	// }
	// else
	// {
	// 	printf("C\n");
	// }

	// if���� ����� ��� ���ǹ��� ������ ���� ��,
	// ���� ���� �ִ� ���ǹ��� ����ȴ�.

#pragma endregion

#pragma endregion

}