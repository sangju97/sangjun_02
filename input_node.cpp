#include<iostream>
using namespace std;
#define node 100

struct employee {
    int number;
    string name;
    float money;
};

void prtpeople(employee people, int num);

int main() {
    employee people[node];
    int i = 0;
    char op;

    cout << "자료를 입력해주세요." << endl;
    while (i < 4) {
        cout << "1) 학번 : "; cin >> people[i].number; 
        cout << "2) 이름 : "; cin >> people[i].name;
        cout << "5) 월급 : "; cin >> people[i].money;
        i++;

        cout << "계속해서 자료를 입력하시겠습니까? (y,n)";
        cin >> op;
        cout << endl;
        if (op == 'n') {
            break;
        }
    }


    for (int j = 0; j < 4; j++) {
        
        cout << "학번 : " << people[j].number << endl;
        cout << "이름 : " << people[j].name << endl;
        cout << "월급 : " << people[j].money << "원" << endl;
    }
    return 0;
}




