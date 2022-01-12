// HomeWork220112.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{

	// even Check

	int arr[10] = { 0, };
	int index = 0;

	while (index < 10)
	{
		arr[index] = (index * 2) + 2;
		index++;
	}


	//odd check

	int arr[10] = { 0, };
	int index = 0;

	while (index<10)
	{
	    arr[index] = (index*2) + 1;
	    index++;
	}

	return 0;
}

