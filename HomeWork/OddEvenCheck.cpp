// HomeWork220112.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//int Arr[10];
	//for (int i = 0; i < 10; i += 1)
	//{
	//	Arr[i] = i;
	//}



	{
		// even Check
		int Arr[10] = { 0, };
		int Index = 0;
		while (Index < 10)
		{
			Arr[Index] = (Index * 2)+2;
			Index++;
		}

		{
			//odd Check
			int Arr[10] = { 0, };
			int Index = 0;
			while (Index<10)
			{
				// 0 부터 시작해서
				Arr[Index]=(Index*2)+1;
				Index++;
				// 0 제외
				// 2 4 8 10 12 14 16 18 
				// 배열이 가득찰때까지 홀수로만 채워주세요
			}

			int a = 0;
		}

	}
}
