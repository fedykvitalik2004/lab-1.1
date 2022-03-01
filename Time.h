#pragma once
class Time
{
private:
	int first, second;    //first-години, second-хвилини
public:
	bool Init(int x, int y);
	void Read();
	void Display() const;

	void SetFirst(int value) { first = (value>=0)?value:0; };   
	void SetSecond(int value) {second = (value>=0 && value<60)?value:0;}
	int GetFirst() const { return first; };
	int GetSecond() const { return second; };

	int minutes() const { return first * 60 + second; };        
};

