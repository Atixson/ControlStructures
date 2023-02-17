#include <iostream>
using namespace std;

//#define SQUARE
//#define TRIANGLE_1 
//#define TRIANGLE_2 
//#define TRIANGLE_3 
//#define TRIANGLE_4
//#define RHOMB
//#define SQUARE_2

#define PLUS_MINUS

//#define CHESS_BOARD
//#define HARD_CHESS - не сделал

void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите значение: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // SQUARE

#ifdef TRIANGLE_1
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_1

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif // TRIANGLE_2

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "*";
		}
		cout << endl;
		for (int k = 0; k < i+1; k++)
		{
			cout << " ";
		}
	}
#endif // TRIANGLE_3

#ifdef TRIANGLE_4
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		for (int k = 0; k <= i; k++)
		{
			cout << "*";
		}
		cout << endl;
	}
#endif // TRIANGLE_4

#ifdef RHOMB
	for (int i = 0; i < n; i++)
	{
		for (int j = n; j > i; j--)
		{
			cout << " ";
		}
		cout << "/";
		for (int k = 0; k < i; k++)
		{
			cout << "  ";
		}
		cout << "\\" << endl;
	}
	for (int i = 0; i < n; i++)
	{
		cout << " \\";
		for (int k = n; k > i+1; k--)
		{
			cout << "  ";
		}
		cout << "/"<< endl;
		for (int j = 0; j < i+1; j++)
		{
			cout << " ";
		}
	}
#endif // RHOMB

#ifdef SQUARE_2
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0) 
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
					cout << "+";
				else
					cout << "-";
			}
			cout << endl;
		}
		else 
		{
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
					cout << "-";
				else
					cout << "+";
			}
			cout << endl;
		}
	}
#endif // SQUARE_2

	//for (int i = 0; i <= 255; i++)
	//{
	//	setlocale (LC_ALL, "C");
	//	cout << i << " - ";
	//	cout << (char)i << endl;
	//}
	
#ifdef CHESS_BOARD
	setlocale(LC_ALL, "C");
	cout << (char)213;
	for (int i = 0; i < n; i++)
	{
		cout << (char)196 << (char)196;
	}
	cout << (char)184;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			cout << (char)179;
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
					cout << (char)178 << (char)178;
				else
					cout << "  ";
			}
			cout << (char)179 << endl;
		}
		else
		{
			cout << (char)179;
			for (int j = 0; j < n; j++)
			{
				if (j % 2 == 0)
					cout << "  ";
				else
					cout << (char)178<<(char)178;
			}
			cout << (char)179 << endl;
		}
	}
	cout << (char)212;
	for (int i = 0; i < n; i++)
	{
		cout << (char)196 << (char)196;
	}
	cout << (char)190;
	cout << endl;
#endif // CHESS_BOARD

#ifdef HARD_CHESS
	/*for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 1; j <= n*n; j++)
			{
				if (j % 2 == 0) 
				{
					for (int k = 0; k < n; k++)
					{
						cout << "*";
					}
				}
				else
				{
					for (int k = 0; k < n; k++)
					{
						cout << " ";
					}
				}
			}
			cout << endl;
		}
		else
		{
			for (int j = 0; j < n*n; j++)
			{
				if (j % 2 == 0) 
				{
					for (int k = 0; k < n; k++)
					{
						cout << " ";
					}
				}
				else
				{
					for (int k = 0; k < n; k++)
					{
						cout << "*";
					}
				}
			}
			cout << endl;
		}
	}*/
	for (int k = 0; k < n*n; k++)
	{
		if (k%2==0)
		{
			for (int i = 0; i < n; i++)
			{
				cout << "*";
			}
		}
		else
		{
			for (int i = 0; i < n; i++)
			{
				cout << "-";
			}
		}
	}


#endif // HARD_CHESS - Не сделал

#ifdef PLUS_MINUS
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//if ((i + j) % 2 == 0)cout << "+ ";else cout << "- ";
			//if (i % 2 == j % 2)cout << "+ "; else cout << "- ";
			//(i % 2 == j % 2) ? cout << "+ ": cout << "- ";
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif // PLUS_MINUS


}