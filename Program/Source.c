#include <stdio.h> 

#define SIZE 10

void main() 
{

#pragma region �ڷ��� ��ȯ

	// ���� �ٸ� �ڷ����� ������ �ִ� ��������
	// ������ �̷���� �� ������ �����ߴ� �ڷ�����
	// �ٸ� �ڷ������� ��ȯ�ϴ� ����

#pragma region �Ϲ��� ����ȯ

	// ���� �ٸ� �ڷ������� ������ �̷���� ��
	// �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� ����

	// int integer = 10;
	// float decimal = 6.5f;
	
	// printf("integer ������ decimal ������ ������ ��� : %f\n", integer + decimal);

	// ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸�
	// �����ϰ� �Ǹ� �Ϲ������� ������ �ս��� �߻�

	// integer = decimal;

	// printf("integer ������ �� : %d\n", integer);

	// ���������� �Ǽ������� �Ϲ��� ����ȯ�� ����������,
	// �Ǽ������� ���������� �Ϲ��� ����ȯ�� �Ұ���

#pragma endregion

#pragma region ����� ����ȯ

	// ������ �̷������ ���� ����ڰ� ���� �ڷ����� ��ȯ�ϴ� ����

	// int attack = 10;
	// int health = 3;
	// float damage = (float)attack / health;
	
	// printf("���� �������� �� : %f\n", damage);

	// ������ �������� ������ �����ϰ� �Ǹ� ������ ������� ���� �� �ִ�.

#pragma endregion

#pragma endregion

#pragma region ��ũ��

	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� ����

	// printf("��ũ�� SIZE�� �� : %d\n", SIZE);

	// ��ũ���� ��� �ڷ����� �������� �����Ƿ�, �޸� ������ ������ ���� �ʴ�.

#pragma endregion

}