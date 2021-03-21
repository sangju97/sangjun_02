#include <iostream>
#include <string>

using namespace std;

struct xampl {
	int x;
	xampl* pNext = 0;
	xampl* pNext2 = 0;
	xampl* pNext3 = 0;

	string name;
	string money;
};


int main() {
	xampl structure;
	xampl* ptr;
	xampl struct2;
	xampl struct3;
	xampl struct4;
	xampl me;
	xampl man_01;
	xampl man_02;
	xampl man_03;


	


	structure.x = 202131406;
	me.name = "sang jun";
	me.money = "20만원";

	structure.pNext = &struct2;
	struct2.x = 202131402;
	man_01.name = "dong hwan";
	man_01.money = "30만원";

	structure.pNext2 = &struct3;
	struct3.x = 202131423;
	man_02.name = "sung hoown";
	man_02.money = "40만원";

	structure.pNext3 = &struct4;
	struct4.x = 202131428;
	man_03.name = "jeh wan";
	man_03.money = "50만원";

	ptr = &structure;

	cout << me.name << me.money << ptr->x << endl;
	cout << man_01.name << man_01.money << ptr->pNext->x << endl;
	cout << man_02.name << man_02.money << ptr->pNext2->x << endl;
	cout << man_03.name << man_03.money << ptr->pNext3->x << endl;
	cin.get();
}