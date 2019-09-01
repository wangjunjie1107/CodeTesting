#include "gameCompany1.h"

//��ʼ����Ϸ  //����1 ����ָ�� ����2 ��������
void INIT_GAME_COMPANY1(void ** p1, char * name)
{
	struct Player * player = malloc(sizeof(struct Player));

	if (player == NULL)
	{
		return;
	}
	*p1 = player;

	strcpy(player->name, "name");//�����������ֵ
	player->exp = 0;
	player->level = 0;
}

//����ս�� ���ս��ʤ�� ����1 ʧ�ܷ���0  ����1 ��� ����2 �����Ѷ�
int FIGHT_GAME_COMPANY1(void *p, int gameDiff)
{
	struct Player * player = p;

	int addExp = 0;//��������ӵľ��� ����

	switch (gameDiff)
	{
		case 1:
			//����ʤ������ǰ�Ѷ�
			addExp = isWin(90, 1);
			break;
		case 2:
			addExp = isWin(50, 2);
			break;
		case 3:
			addExp = isWin(30, 3);
			break;
		default:
			break;
	}

	//�������ۼ����������
	player->exp += addExp;

	player->level = player->exp / 10;

	if (addExp == 0)
	{
		//ս��ʧ��
		return 0;
	}
	else
	{
		return 1;
	}
}

//�ж�����Ƿ�ʤ��
int isWin(int winRate, int diff)
{
	//���1-100
	int random = rand() % 100 + 1;
	if (random <= winRate)
	{
		//ʤ��
		return diff * 10;
	}
	else
	{
		//ʧ��
		return 0;
	}
}

//�鿴�����Ϣ
void PRINT_GAME_COMPANY1(void * p)
{
	struct Player * player = p;

	printf("���<%s>-----��ǰ�ȼ�<%d>----��ǰ����<%d>\n", player->name, player->level, player->exp);

}

//�뿪��Ϸ
void EXIT_GAME_COMPANY1(void * player)
{
	if (player == NULL)
	{
		return;
	}

	free(player);
	player = NULL;
}