// HomeWork220112.cpp : �� ���Ͽ��� 'main' �Լ��� ���Ե˴ϴ�. �ű⼭ ���α׷� ������ ���۵ǰ� ����˴ϴ�.
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

