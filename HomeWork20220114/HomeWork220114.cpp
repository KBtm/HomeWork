// HomeWork220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{
	int count = 0;
	while (_Left[count] != '\0')
	{
		if (_Left[count] > 96 && _Left[count] < 123)
		{
			_Right[count] = _Left[count] - 32;
		}
		else
			_Right[count] = _Left[count];

		count++;
	}
}

// 좀 어려울거다.
int ToInt(const char* _Left)
{
	int count = 0;
	int Retnum=0;


	while (_Left[count] != '\0')
	{
		if (_Left[count] >= 48 && _Left[count] <= 57)
		{
			Retnum *= 10;
			Retnum += _Left[count] - 48;
		}
		else{
			Retnum *= 10;
			Retnum += _Left[count];
		}
		
		count++;
	}

	return Retnum;
}

// 좀 어려울거다.
void CharChange(char* _Text, char _Prev, char _Next)
{
	int check = 0;
	while (_Text[check] != '\0')
	{
		if (_Text[check] == _Prev)
		{
			_Text[check] = _Next;
		}
		check++;
	}

}

void Revers(const char* _Sorce, char* _Result)
{
	int LenthCheck = 0;
	int count = 0;


	while (_Sorce[LenthCheck] != '\0')
	{
		LenthCheck++;
	}
	int SorceCnt = LenthCheck-1;
	for (int i = 0; i < LenthCheck; i++)
	{
		
		_Result[i] = _Sorce[SorceCnt -i];
	}

}

void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{
	int Startnum = _Start;
	int Endnum = _End;
	int cnt = _End - _Start;

	for (int i = 0; i <= cnt; i++)
	{
		_Result[i] = _Sorce[Startnum + i];
	}
}

void TextChange(char* _Text, const char* _Prev, const char* _Next)
{

}

int main()
{

	
	//	char Text[5];

	//	ToUpper("pP1231dcwsec", Text);
	//	//      "12ABCCEEE"
	//	printf_s(Text);
	//}

	{
		char Text[100] = {0};

		ToUpper("12abCcEee", Text);
		//      "12ABCCEEE"
		printf_s(Text);
		printf_s("\n");
	}

	{
		char Text = '1';
		int Count = Text;

		int Value = ToInt("15815");

		printf("%d", Value);
		printf_s("\n");
	}

	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd

		printf_s(Text);
		printf_s("\n");
	}

	{
		char Text[100] = { };
		Revers("0123456789", Text);
		printf_s(Text);
		printf_s("\n");
	}

	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		printf_s(Text);
		printf_s("\n");
		// "234567"
	}

	{
		// 이건 질문 안하셔도 됩니다.
		char Text[100] = "aa, bb, aa, bb aa aa aa aaaaaaa ccdffeds";

		TextChange(Text, "aa", "fff");
		// "fff, bb, fff, bb fff fff fff fffffffffa ccdffeds";
		// aa| bb| cc| dd
		printf_s(Text);
	}

}
