// kafseis.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	while (true)
	{
		double c, h, o;
		int a;
		cout << "Choose ton desmo tvn anthrakvn 1.monos (-), 2.diplos (=), 3.triplos " << endl;
		cin >> a;
		if (a == 1)
		{
			cout << "Enter the number of C " << endl;
			cin >> c;
			system("Pause");
			if (c <= 0)
			{
				cout << "Enter a valid value " << endl;
				cout << "==============================================================================================" << endl;
			}
			else {
				h = 2 * c + 2;
				o = (h / 2 + 2 * c) / 2;
				cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO2" << endl;
				cout << "==============================================================================================" << endl;
			}

		}

		else if (a == 2)
		{
			cout << "Enter the number of C " << endl;
			cin >> c;
			system("Pause");
			if (c <= 0)
			{
				cout << "Enter a valid value " << endl;
				cout << "==============================================================================================" << endl;
			}
			else {
				h = 2 * c;
				o = (h / 2 + 2 * c) / 2;
				cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO2" << endl;
				cout << "==============================================================================================" << endl;
			}

		}

		else
		{
			cout << "Enter the number of C " << endl;
			cin >> c;
			system("Pause");
			if (c <= 0)
			{
				cout << "Enter a valid value " << endl;
				cout << "==============================================================================================" << endl;
			}
			else {
				h = 2 * c - 2;
				o = (h / 2 + 2 * c) / 2;
				cout << "H" << h << "C" << c << " + " << o << "O2 --> " << h / 2 << "H2O + " << c << "CO2" << endl;
				cout << "==============================================================================================" << endl;
			}

		}

	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
