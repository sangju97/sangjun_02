#include<iostream>
using namespace std;

struct node {
	int x;
	node* pNext = 0;
	string name; 
	int id;
	float money;
};

int main() {
	node structure;
	node* ptr;
	node struct2;
	node* ptr2;
	node struct3;
	node* ptr3;
	node struct4;

	structure.name = "park sang jun";
	structure.id = 202131406;
	structure.money = 20;

	ptr = &structure;

	structure.pNext = &struct2;
	struct2.name = "na je hwan";
	struct2.id = 202131458;
	struct2.money = 40;

	ptr2 = &struct2;

	struct2.pNext = &struct3;
	struct3.name = "kim dong hwan";
	struct3.id = 202131402;
	struct3.money = 60;

	ptr3 = &struct3;

	struct3.pNext = &struct4;
	struct4.name = "ham sung hoon";
	struct4.id = 202131423;
	struct4.money = 80;


	cout << ptr->name << " " << ptr->id << " " << ptr->money <<"만원" << endl;
	cout << ptr->pNext->name << " " << ptr->pNext->id << " "<< ptr->pNext->money <<"만원" << endl;
	cout << ptr2->pNext->name << " " << ptr2->pNext->id << " " << ptr2->pNext->money << "만원" << endl;
	cout << ptr3->pNext->name << " " << ptr3->pNext->id << " " << ptr3->pNext->money << "만원" << endl;

	cin.get();
}
