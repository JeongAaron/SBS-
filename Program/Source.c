#include <stdio.h> 

#include <stdlib.h>

#include <math.h>

struct GameObject
{
	char grade;
	int health;
	float attack;
	double defence;

	// ����ü�� ��� ��� ������ ������ ���� �޸��� ũ�Ⱑ �ٸ��� ������ �� ������,
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����Ǿ� �ִ�.
};

struct Vector2
{
	float x;
	float y;
};

struct Node
{
	int data;
	struct Node * next;
};

int main()
{

#pragma region ����ü(struct)

	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ��

	// struct GameObject gameObject;
	// gameObject.grade = 'A';
	// gameObject.health = 75;
	// gameObject.attack = 5.5f;
	// gameObject.defence = 3.5f;

	// printf("gameObject�� ��� : %c\n", gameObject.grade);
	// printf("gameObject�� ü�� : %d\n", gameObject.health);
	// printf("gameObject�� ���ݷ� : %f\n", gameObject.attack);
	// printf("gameObject�� ���� : %f\n", gameObject.defence);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� ����.

#pragma endregion

#pragma region ����Ʈ �е�

	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���� ����Ʈ�� �е����ִ� ����ȭ �۾�

	// struct GameObject object = {'C',30,3.25f,3.5};

	// printf("GameObject�� ũ�� : %d\n", sizeof(object));

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿�
	// ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� ����

#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// printf("100�� ������ : %lf\n", sqrt(100));

	// printf("10�� : %lf\n", pow(10,2));

	// struct Vector2 charactor = {0, 0};

	// struct Vector2 monster = { 5,5 };
	
	// float x = pow(monster.x - charactor.x, 2);
	
	// float y = pow(monster.y - charactor.y, 2);
	
	// float range = sqrt(x + y);
	
	// if (range <= 3.0f)
	// {
	//	 printf("���� ����");
	// }

	// else
	// {
	//	 printf("�̵� ����");
	// }

#pragma endregion

#pragma region �ڱ� ���� ����ü

	// ����ü ���ο� �ڱ� �ڽ��� �ڷ����� ��� ������ ������ �ִ� ����ü

	struct Node * node1 = malloc(sizeof(struct Node));
	struct Node * node2 = malloc(sizeof(struct Node));
	struct Node * node3 = malloc(sizeof(struct Node));

	node1->data = 10;
	node1->next = &node2;
	node2->data = 20;
	node2->next = &node3;
	node3->data = 30;
	node3->next = NULL;

	int* currentNode = no

	


#pragma endregion

}