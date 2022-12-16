#include<iostream>
using namespace std;
#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIFHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICA_LINE (char)179
#define WHITE_BOX (char)219
//#define Chess
void main()
{
	setlocale(LC_ALL, "Rus");
#if defined Chess
	int n;
	cout << "¬ведите размер доски: "; cin >> n;

	setlocale(LC_ALL, "C");
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (j == 0 && i < 1)cout << char(218);
			else if (j == n && i < 1)cout << (char)191;
			else if (i == n && j == 0)cout << (char)192;
			else if (i == n && j == n)cout << (char)217;
			else if (i == 0 || i == n)cout << (char)196 << (char)196;
			else if (j == 0 || j == n)
			{
				cout << (char)179;
			}
			(i % 2 == j % 2) ? cout << (char)219 << (char)219 : cout << "  ";
		}
		cout << endl;
	}
#endif

}