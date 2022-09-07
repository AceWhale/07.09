#include <iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int X, int Y)
	{
		x = X;
		y = Y;
	}
};

class Person
{
private:
	string name;
	int age;
public:
	Person()
	{
		name = "DEFAULT";
		age = 0;
	}
	Person(string a, int b)
	{
		name = a;
		age = b;
	}

};

class Student
{
private:
	string name;
	int age;
public:
};
int main()
{

}