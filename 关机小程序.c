#include <stdio.h>
#include <stdlib.h>//system����
#include <string.h>

/*
	1.ִ��dos����
	2.��Ӧ�ó���
*/

/*
	1.���Ʋ˵�
	2.��������



*/



void menu() {

	printf("----------C���Թػ�С����----------\n");
	printf("\t0.�˳�ϵͳ\n");
	printf("\t1.���̹ػ�\n");
	printf("\t2.ע��\n");
	printf("\t3.��ʱ�ػ�\n");
	printf("\t4.ȡ���ػ�\n");
	printf("----------------------------------\n");
	printf("�����루0-3����");


}

//��ʱ�ػ�
void input() {


	//
	char cmdStr[50] = { "shutdown -s -t " };   //�������һ���ո�
	char inputstr[20] = "";
	printf("������ػ�ʱ��");
	scanf_s("%s", inputstr, 20);              //�����ı༭����Ҫ��_s��

	/*
		strcpy strcat strcmp strlen
		strcat(str1,str2);
	
	
	
	*/

	system(strcat(cmdStr, inputstr));








}
//��������
void keydown() {

	//scanf(),getchar(), _getch()  ,gets(),
	int userKey = 0;
	scanf_s("%d", &userKey);
	switch (userKey)
	{
	case 0:
		exit(0);                //�˳�
		break;
	case 1:
		system("shutdown -p");      //���̹ػ�
		break;
	case 2:
		system("shutdown -1");
		break;
	case 3:
		input();
		break;
	case 4:
		system("shutdown -a");
		break;



	}




}

//��������
void setWindouStyle()
{
	system("mode con cols=35 lines=12");
	system("title �ػ�С����");
	system("color f0");




}


int main() {

	



	setWindouStyle();
	while (1)
	{
		menu();
		keydown();
		system("pause");               //��ֹ����
		system("cls");                 //����



	}

	
	return 0;
}