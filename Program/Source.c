#include <stdio.h> 

void main()
{

#pragma region �迭

	// ���� �ڷ����� ������� �̷���� ���� ����
	
	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������,
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �ȴ�.
	
	// int array[3];
	
	// printf("array �ڷ����� ũ�� : %u\n", sizeof(array));
	
	// int size = sizeof(array) / sizeof(int);
	
	// for (int y = 0; y <= size - 1; y++)
	// {
	// 	array[y] = (y + 1) * 10;
	// }
	
	// for (int i = 0; i <= size-1; i++)
	// {
	// 	printf("aaray[%d] = %d\n", i, array[i]);
	// }

	// �迭�� ��� ù ��° ���Ҵ� 0���� ����

	// float list [] = { 1.25f,2.75f,3.575f,4.895f };

	// for (int i = 0; i < 4; i++)
	// {
	// 	printf("list[%d]=%f\n", i, list[i]);
	// }

	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������ ��ҿ� ����
	// �迭�� ũ�Ⱑ �����ȴ�.

	// float * pointer = list;

	// pointer = pointer + 2;

	// *pointer = 7.875f;

	// printf("%f\n", *pointer);
	// printf("%p\n", pointer);
	// printf("%p\n", &list[2]);

	// �迭�� �������� �޸� ������ ������,
	// �迭�� �̸��� �迭�� �����ּҸ� ����Ų��.

#pragma endregion

#pragma region ���ڿ�

	// �������� �޸� ������ ����� ���� ������ ����

	// const char* string = "Queue";

	// printf("string ������ �� : %s\n", string);

	// string = "stack";

	// printf("string ������ �� : %s\n", string);

	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������
	// ���ڿ��� ���� ������ �� ����.

	// char word[] = { "Darkness" };

	// char content[] = { "Github" };

	// printf("string ������ ũ�� : %d\n", sizeof(word));

	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�,
	// �������� ���ڿ��� ���� �˷��ִ� ����ڰ� �߰��ȴ�.

	// word[4] = '\0';

	// printf("word �迭�� �� : %s\n", word);

	// word = "content"(�Ұ�)

	// ���ڿ��� ��� ���� �������� �޸� �������� ����Ǿ� ������
	// ���� �迭 ���̿� ��ȿ�� ���ڸ� �ְ� �Ǹ� ��ȿ�� ���ڱ����� ��µȴ�.

#pragma endregion

#pragma region ASCII �ڵ�

	// �̱� ANSI ���� ǥ��ȭ�� ���� ��ȯ�� 7 bit ��ȣ ü��.

	// char alphabet = 65;

	// for (int i = 0; i < 26; i++)
	// {
	//    printf("%c\n", 'A' + i);
	// }

#pragma endregion

}