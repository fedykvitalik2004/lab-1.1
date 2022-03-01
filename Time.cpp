#include "Time.h"
#include <iostream>

using namespace std;

void Time::Display() const
{
	cout << "Hours=" << first << " and minutes=" << second << endl;
}

bool Time::Init(int x, int y)
{
	if (x >= 0 && y >= 0 && y < 60)
	{
		first = x;
		second = y;
		return true;
	}
	else
		return false;
}

void Time::Read()
{
	int x, y;
	do
	{
		cout << "Input values" << endl;
		cout << "Hours="; cin >> x;
		cout << "Minutes="; cin >> y;
	} while (!Init(x, y));
}


