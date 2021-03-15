#include <iostream>

using namespace std;

int main()
{
	int x;            // 지정할 정수
	int *p;           // 포인트할 정수

	p = &x;           // x의 정수에 포인트 적용 &=지정문자
	cin >> x;          // x값을 임력하면 포인트한p도 같이 입력된다 / x값을 입력
	cin.ignore(); // 문자곗수 혹은, \n값을 읽고버린다.
	cout << *p << "\n"; // *를 사용하여 x값을 가져온다 포인트한곳에 x값을 출력
	cin.get();     //표준 입력 버퍼에서 문자를 하나만 가져옴

	return 0;

	//cout,sin cout는 출력을 담당하는코드이며, sin은 입력을 담당하는 코드입니다.
}