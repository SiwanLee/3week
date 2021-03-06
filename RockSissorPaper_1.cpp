// RockSissorPaper.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h> // random 함수를 사용하기 위한 헤더
#include <windows.h>  //Sleep을 이용하기 위한 헤더
#define Max 1000 // 1부터 1000까지 숫자
#define Num 2 // 2개의 숫자 출력
using namespace std;

int main(void)
{
	//------------------------배열 1000개 만들고 숫자 입력---------------//
	int i , temp;
	//int array[Num];
	int cal = 0;
	int Equal;
	int num;
	srand((unsigned int)time(NULL));

	int array[Max];
	//printf("%d\n", sizeof(array));
	for (i = 0; i < sizeof(array) / sizeof(int); i++)
	{
		array[i] = i;
		//printf("%d\n", rand());
	}

	printf("가위 바위 보 게임을 시작합니다.\n");

	int count = 3;

	while (1) {
		printf("%d초\n", count);
		Sleep(1000);
		count--;

		if(count==0)
			break;
		//printf("3초\n");
		//Sleep(1000); //1초
		//printf("2초\n");
		//Sleep(1000); //1초
		//printf("1초\n");
		//Sleep(1000); //1초
		//printf("Rock Sissor Paper!!\n");
		//break;
	}

//	while (cal < Num)
//	{
//		temp = rand() % 1000 + 1; // 1부터 1000까지 출력
////-------------------중복검사-------------------//
//		for (int i = 0; i < cal; i++) 
//		{
//			if (temp == array[i])
//			{
//				Equal = 1;
//				break;
//			}
//		}
//		if (Equal == 0)
//		{
//			array[cal] = temp;
//			cal++;
//		}
////--------------------중복검사------------------//
	int temprand = 0;
	for (i = 0; i < Num; i++)
	{
		temprand = rand();
//--------------------------------------------------------------------//
		while (temprand > Max)  // temprand가 1000이 넘을 경우 rand함수를 재실행 한다. 결국 1000이하인 숫자가 나오면 while에서 빠져나오는 형식
		{
			temprand = rand();
		}
//----------------------------------------------------------------------//
		int ntemp = array[temprand] % 3;
		string strtemp;
		printf("\n");
		
		printf("\n");
		if (ntemp == 0)
		{
			strtemp ="가위";
		} 
		else if (ntemp == 1)
		{
			strtemp = "바위";
		}
		else
		{
			strtemp = "보";
		}
		printf("가위 바위 보! : %s", strtemp);
	}
	return 0;
}
// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
