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
	Student(){}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
};

class Academy
{
private:
	Student* group;
	int count;
public:
	Academy(){}
};

int main()
{

}