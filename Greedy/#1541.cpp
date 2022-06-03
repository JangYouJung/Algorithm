#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);


    //[1]계산식 입력 받기
    string calculation;
    cin >> calculation;

    vector<int> number;//숫자 저장
    vector<char> sign;//부호 저장


    //[2]계산식에서 숫자와 부호 분리
    for (int i = 0; i < calculation.size(); i++) {
        int num = 0;
        if (isdigit(calculation[i])) { //숫자 -> number 삽입          
            num += calculation[i] - '0';
            while (isdigit(calculation[++i])) {
                num *= 10;
                num += calculation[i] - '0';
            }
            number.push_back(num);
        }
        if (calculation[i] != NULL) {//부호 -> sign 삽입
            sign.push_back(calculation[i]);
        }
    }

    bool minus = false;
    int tmp = 0, answer = number[0];

    //[3]Bool형 변수 minus 사용해서 계산
    for (int i = 0; i<sign.size(); i++) {
        cout << "---------" << i << "----------" << endl;///////////
        if (sign[i] == '-') {
            if (minus) {//마이너스로 묶는 괄호 닫기
                answer -= tmp;
                tmp = number[i+1];
                cout << "[1] tmp: " << tmp << endl;///////////
            }
            else {//마이너스로 묶는 괄호 열기
                minus = true;
                tmp += number[i + 1];
                cout << "[2] tmp: " << tmp << endl;///////////
            }                     
        }      
        else {
            if (minus) { //마이너스 괄호에 묶임
                tmp += number[i + 1];
                cout << "[3] tmp: " << tmp << endl;///////////
            }
            else {
                answer += number[i + 1];
                cout << "[4] tmp: " << tmp << endl;///////////
            }
        }
    }
    if (tmp) answer -= tmp;

    cout << answer;

    return 0;
}