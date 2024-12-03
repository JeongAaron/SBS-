#include <stdio.h> 

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

	printf("100�� ������ : %lf\n", sqrt(100));

	printf("10�� : %lf\n", pow(10,2));

	struct Vector2 charactor = {0, 0};

	struct Vector2 monster = { 5,5 };
	
	float x = pow(monster.x - charactor.x, 2);
	
	float y = pow(monster.y - charactor.y, 2);
	
	float range = sqrt(x + y);
	
	if (range <= 3.0f)
	{
		printf("���� ����");
	}

	else
	{
		printf("�̵� ����");
	}

#pragma endregion

}