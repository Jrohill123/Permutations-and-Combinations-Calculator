#include <iostream>
#include <fstream>
#include "Permutations.h"
#include "Combinations.h"
using namespace std;

int main()
{

	int n, r, choice;
	cout << "If you want to do a permuatition press 1, if a combination press 2, if done with program press 3";
	cout << endl;
	cin >> choice;
	while (choice == 1)
	{
		Permutations one;
		cout << "What is your total number of objects?" << endl;
		cin >> n;
		cout << "Ok, now how many objects are taken, what is your r?" << endl;
		cin >> r;
		for (int i = 1; i <= r; i++)
		{
			cout << "Your calculation is: ";
			one.calculation(n, i);
			cout << endl;
		}
		cout << "If you want to do another permuatition press 1, if a combination press 2, if done with program press 3";
		cout << endl;
		cin >> choice;
	}

	while (choice == 2)
	{
		Combinations one;
		cout << "What is your total number of objects?" << endl;
		cin >> n;
		cout << "Ok, now how many objects are taken, what is your r?" << endl;
		cin >> r;
		for (int i = 1; i <= r; i++)
		{
			cout << "Your calculation is: ";
			one.calculation(n, i);
			cout << endl;
		}
		cout << "If you want to do another permuatition press 1, if a combination press 2, if done with program press 3";
		cout << endl;
		cin >> choice;
	}


	while (choice == 3)
	{
		return 0;
	}
}