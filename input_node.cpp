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

    cout << "�ڷḦ �Է����ּ���." << endl;
    while (i < 4) {
        cout << "1) �й� : "; cin >> people[i].number; 
        cout << "2) �̸� : "; cin >> people[i].name;
        cout << "5) ���� : "; cin >> people[i].money;
        i++;

        cout << "����ؼ� �ڷḦ �Է��Ͻðڽ��ϱ�? (y,n)";
        cin >> op;
        cout << endl;
        if (op == 'n') {
            break;
        }
    }


    for (int j = 0; j < 4; j++) {
        
        cout << "�й� : " << people[j].number << endl;
        cout << "�̸� : " << people[j].name << endl;
        cout << "���� : " << people[j].money << "��" << endl;
    }
    return 0;
}




