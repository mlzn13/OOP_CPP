#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
};

void main()
{
	int a;   //обь€вление переменной 'a', типа 'int'
	Point A; //обь€вление переменной 'A', типа 'Point'
	         //создание экземпл€ра 'A', структуры 'Point'
	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
}