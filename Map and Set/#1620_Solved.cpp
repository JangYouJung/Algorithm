#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    map<int, string> Pokemon;//포켓몬 도감
    map<string, int> ByName; //이름 순 정렬
    vector<string> Quest; //문제 담는 벡터

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N ; i++) {//도감 삽입
        string name;
        cin >> name;
        Pokemon.insert({ i + 1, name }); 
        ByName.insert({ name, i + 1 });
    }

    for (int i = 0; i < M; i++) {//문제 받기
        string quest;
        cin >> quest;
        Quest.push_back(quest);
    }


    for (int i = 0; i < M; i++) { //문제 풀기      
        if (isdigit(Quest[i][0])) {//문제가 숫자면 Pokemon 검색
            cout << Pokemon[stoi(Quest[i])] << '\n';
        }
        else {//문제가 이름이면 ByName에서 검색
            cout << ByName[Quest[i]] << '\n';
        }
    }

    return 0;
}
