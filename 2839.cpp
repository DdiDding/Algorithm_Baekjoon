#include <stdio.h>
#include <string.h>

int main()
{
	int kg = 0;
	int cnt = 0;
	scanf("%d", &kg);

	//�켱 5�� ������ ���������� Ȯ��
	if (kg % 5 == 0)
	{
		printf("%d", kg / 5);
		return 0;
	}

	//KG�� 15 ���ϰ� �� ������ 5�� ���δ�.
	while (15 < kg)
	{
		kg -= 5;
		++cnt;
	}

	//�׸��� �ִ� ������ 3�̸��̸� -1�� ���
	while (3 <= kg)
	{
		//�ϴ� ���� KG�� �ּ� ������� 15�̸��̱� ������ 3���� ����������� 5�� ������ ���������� ����.
		if (kg % 3 == 0)
		{
			cnt += kg / 3;
			printf("%d", cnt);
			return 0;
		}

		kg -= 5;
		++cnt;
	}

	printf("%d", -1);
	return 0;
}
