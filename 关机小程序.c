#include <stdio.h>
#include <stdlib.h>//system函数
#include <string.h>

/*
	1.执行dos命令
	2.打开应用程序
*/

/*
	1.绘制菜单
	2.按键交互



*/



void menu() {

	printf("----------C语言关机小程序----------\n");
	printf("\t0.退出系统\n");
	printf("\t1.立刻关机\n");
	printf("\t2.注销\n");
	printf("\t3.定时关机\n");
	printf("\t4.取消关机\n");
	printf("----------------------------------\n");
	printf("请输入（0-3）：");


}

//定时关机
void input() {


	//
	char cmdStr[50] = { "shutdown -s -t " };   //最后面有一个空格
	char inputstr[20] = "";
	printf("请输入关机时间");
	scanf_s("%s", inputstr, 20);              //其他的编辑器不要加_s。

	/*
		strcpy strcat strcmp strlen
		strcat(str1,str2);
	
	
	
	*/

	system(strcat(cmdStr, inputstr));








}
//按键处理
void keydown() {

	//scanf(),getchar(), _getch()  ,gets(),
	int userKey = 0;
	scanf_s("%d", &userKey);
	switch (userKey)
	{
	case 0:
		exit(0);                //退出
		break;
	case 1:
		system("shutdown -p");      //立刻关机
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

//调整窗口
void setWindouStyle()
{
	system("mode con cols=35 lines=12");
	system("title 关机小程序");
	system("color f0");




}


int main() {

	



	setWindouStyle();
	while (1)
	{
		menu();
		keydown();
		system("pause");               //防止闪屏
		system("cls");                 //清屏



	}

	
	return 0;
}