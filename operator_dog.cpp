#include <iostream>

using namespace std;

class Point
{
private:
	double m_x;

public:
	Point(double x = 0.0)
		: m_x(x) {}

	// ���� ����
	Point& operator++()
	{
		m_x += 1;
		

		return *this;
	}

	// ���� ����
	Point operator++(int)
	{
		Point temp(m_x);

		m_x += 1;

		return temp;
	}

	// ��� ������ �����ε�
	friend ostream& operator << (ostream& out, const Point& point)
	{
		out << point.m_x << " " ;
		return out;
	}
};




class Animal {

public:
	virtual void Cry() = 0;
	virtual void Gosu() = 0;

};

class Dog : public Animal {

public:
	void Gosu() {
		cout << "�ٸ��� 4��\n";
		cout << "������ ����\n";
		return;
	}
	void Cry() {
		cout << "�۸�\n" << endl; return;
	}

};

class Bird : public Animal {

public:
	void Gosu() {
		cout << "�ٸ��� 2��\n";
		cout << "������ �����\n";
		return;
	}
	void Cry() {
		cout << "±±\n" << endl; return;
	};

};

class Cat : public Animal {

public:
	void Gosu() {
		cout << "�ٸ��� 4��\n";
		cout << "������ ��\n";
		return;
	}
	void Cry() {
		cout << "�Ŀ�\n" << endl; return;
	};

};

int main()
{
	Point p1(1);

	Animal* pa = new Dog;
	Animal* pb = new Bird;
	Animal* pc = new Cat;

	
	 
	

	cout << ++p1 << endl; // �ٷ� ���� 2
	pa->Gosu();
	pa->Cry();

	cout << p1++ << endl; // ���� �࿡�� ���� 2   
	pb->Gosu();
	pb->Cry();

	cout << p1 << endl; //3
	pc->Gosu();
	pc->Cry();

	Dog* pd = (Dog*)pa;
	pd->Cry();

	Bird* pe = (Bird*)pb;
	pb->Cry();

	Cat* pf = (Cat*)pc;
	pc->Cry();
	return 0;
}