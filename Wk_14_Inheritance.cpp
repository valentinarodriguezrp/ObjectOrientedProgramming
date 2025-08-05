/************************************************************
Valentina Rodriguez
Programming Project 6: inheritance
Date: April 20, 2025
hours spent on project: .5
************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Shape
{
	string name;
public:
	Shape(string n) : name(n) {}
	string GetName() { return name; }
	void SetName(string n) { name = n; }
	virtual double GetArea() = 0;
};

class Circle : public Shape
{
	double radius;
public:
	Circle(string n, double r) : Shape(n), radius(r) {}
	void SetRadius(double r) { radius = r; }
	double GetRadius() const { return radius; }
	double GetArea()
	{
		return 3.14159 * radius * radius;
	}
};

class Rectangle : public Shape
{
	double length;
	double width;
public:
	Rectangle(string n, double l, double w) : Shape(n), length(l), width(w) {}
	void SetLength(double l) { length = l; }
	void SetWidth(double w) { width = w; }
	double GetLength() const { return length; }
	double GetWidth() const { return width; }
	double GetArea() { return length * width; }
};

class RectCylinder : public Rectangle {

	double height;
public:

	RectCylinder(string n, double l, double w, double h) : Rectangle(n, l, w), height(h) {
	}
	void SetHeight(double h) { height = h; }
	double GetHeight() const { return height; }
	double GetArea() { return Rectangle::GetArea() * height; }
};

class Triangle : public Shape
{
	double base;
	double height;
public:
	Triangle(string n, double b, double h) : Shape(n), base(b), height(h) {}
	void SetBase(double b) { base = b; }
	void SetHeight(double h) { height = h; }
	double GetBase() const { return base; }
	double GetHeight() const { return height; }
	double GetArea() { return (1 / 2.0 * base * height); }
};

class TriPrism : public Triangle {

	double depth;
public:
	TriPrism(string n, double b, double h, double d) : Triangle(n, b, h), depth(d) {
	}
	void SetDepth(double d) { depth = d; }
	double GetDepth() const { return depth; }
	double GetArea() { return Triangle::GetArea() * depth; }
};

class Cylinder : public Circle
{
	double height;
public:
	Cylinder(string n, double r, double h) : Circle(n, r), height(h) {}
	void SetHeight(double h) { height = h; }
	double GetHeight() const { return height; }
	double GetArea()
	{
		
		return Circle::GetArea() * height;
	}
};



int main()
{
	cout << "C:\tCircle" << endl;
	cout << "R:\tRectangle" << endl;
	cout << "T:\tTriangle" << endl;
	cout << "D:\tCylinder" << endl;
	cout << "N:\tRectCylinder" << endl;
	cout << "P:\tTriangularPrism" << endl;
	cout << "Please choose a shape: ";

	char choice;
	cin >> choice;
	cin.ignore();
	Circle* c = nullptr;
	Rectangle* r = nullptr;
	Triangle* t = nullptr;
	Cylinder* d = nullptr;
	RectCylinder* n = nullptr;
	TriPrism* p = nullptr;

	switch (choice)
	{
	case 'C':
	case 'c':
		c = new Circle("Circle", 2.2);
		break;
	case 'R':
	case 'r':
		r = new Rectangle("Rectangle", 5.0, 6.0);
		break;
	case 'T':
	case 't':
		t = new Triangle("Triangle", 5.5, 10.5);
		break;
	case 'd':
	case 'D':
		d = new Cylinder("Cylinder", 2, 10);
		break;
	case 'N':
	case 'n':
		n = new RectCylinder("RectCylinder", 10.0, 20.0, 30.0);
		break;
	case 'p':
	case 'P':
		p = new TriPrism("TriPrism", 100.0, 20.5, 30.0);
		break;
	default:
		cout << "There is no such choice." << endl;
		break;
	}


	switch (choice)
	{
	case 'C':
	case 'c':
		cout << c->GetName() << ", area: " << c->GetArea() << endl << endl;
		break;
	case 'R':
	case 'r':
		cout << r->GetName() << ", area: " << r->GetArea() << endl << endl;
		break;
	case 'T':
	case 't':
		cout << t->GetName() << ", area: " << t->GetArea() << endl << endl;
	case 'd':
	case 'D':
		cout << d->GetName() << ", area: " << d->GetArea() << endl << endl;
		break;
		break;
	case 'N':
	case 'n':
		cout << n->GetName() << ", area: " << n->GetArea() << endl << endl;
		break;
	case 'P':
	case 'p':
		cout << p->GetName() << ", area: " << p->GetArea() << endl << endl;
		break;
	default:
		cout << "There is no such choice." << endl;
		break;
	}
	cout << endl;
	return 0;
}
