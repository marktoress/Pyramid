#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;

void main()
{
	int a;
	cout << "Enter the height of the pyramid : " << endl;
	cin >> a;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a * 2 - 1; j++)
		{
			if (j >= a - i - 1 && j <= a + i - 1)
			{
				cout << "*";
			}
			else
				cout << " ";
		}
		cout << endl;
	}


	_getche();
}