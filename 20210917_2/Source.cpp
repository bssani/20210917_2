#include <iostream>

using namespace std;

int main()
{
	//배열
	/*int a[100];
	int i = 0;
	int Sum = 0;*/
	//a 0 1 2 3 4 5 6 7 8 9 
	// [2^32][][][][][][][][][]
	//for (i = 0; i <= 100; i++)
	//{
	//	Sum += i;
	//}

	//cout << Sum;
	int Total = 0;

	for (int Count = 1; Count <= 100; Count++ )
	{
		Total = Total + Count;
	}

	cout << Total << endl;

	//type
	//int -> float
	//float -> int
	//float <- double 
	//casting(형변환)
	//(형)원래형태
	//static_cast<새로운형>(원래형태)
	//int -> char
	//char -> int
	

	//char C = static_cast<char>(512);
	//cout << static_cast<int>(C) << endl;

	//cin >> Korea;
	//cin >> England;
	//cin >> Brazil;
	//int Sum = Korea + England + Brazil;
	//float Average = static_cast<float>((Korea + England + Brazil)) / 3.0f;
	//cout << Sum << endl;
	//cout << Average << endl;

	return 0;
}