#include "car.cpp""

int main() {
	Car c1{ "2020 아반떼",1598,123 };
	Car c2{ "2020 소나타",1591,180 };
	Car c3{ "2019 아이오닉 하이브리드",1580,105 };
	Car c4{ "2020 싼타페",2151,202 };

	cout << "<현대자동차>" << endl;
	cout << c1.Getname() << ", " << "배기량 :" << c1.Getcc() << "cc" << ", " << "최대출력 :" << c1.Gethp() << "hp" << endl;
	cout << c2.Getname() << ", " << "배기량 :" << c2.Getcc() << "cc" << ", " << "최대출력 :" << c2.Gethp() << "hp" << endl;
	cout << c3.Getname() << ", " << "배기량 :" << c3.Getcc() << "cc" << ", " << "최대출력 :" << c3.Gethp() << "hp" << endl;
	cout << c4.Getname() << ", " << "배기량 :" << c4.Getcc() << "cc" << ", " << "최대출력 :" << c4.Gethp() << "hp" << endl;

}
