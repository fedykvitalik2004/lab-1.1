#include <iostream>
#include "Time.h"

using namespace std;

Time makeTime(int x, int y)
{
	Time a;
	if (!a.Init(x, y))
		cout << "Wrong argument to Init" << endl;
	return a;
}

int main()
{
	Time test;
	int x, y;

	test.Read();
	test.Display();
	cout << "All minutes=" << test.minutes() << endl << endl;
	
	cout << "Input values" << endl;
	cout << "Hours="; cin >> x;
	cout << "Minutes="; cin >> y;
	test = makeTime(x, y);
	
	cin.get();
	return 0;
}