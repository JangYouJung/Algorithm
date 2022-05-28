#include <iostream>
#include <map>
#include <string>
#include <cctype>
#include <vector>
#include <sstream>
using namespace std;

int findByValue(map<int, string> Map, string s) //MAP value값으로 KEY 값 찾기
{
    auto it = Map.begin();
    while (it != Map.end()) {
        if (it->second == s) {
            return it->first;
        }
        it++;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    map<int, string> Pokemon;//포켓몬 도감
    vector<string> Quest;

    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N ; i++) {//도감 삽입
        string name;
        cin >> name;
        Pokemon.insert({ i + 1, name }); 
    }

    for (int i = 0; i < M; i++) {
        string quest;
        cin >> quest;
        Quest.push_back(quest);
    }


    for (int i = 0; i < M; i++) { //문제 풀기      
        if (isdigit(Quest[i][0])) {
            cout << Pokemon[stoi(Quest[i])] << '\n';
        }
        else {
            cout<<findByValue(Pokemon, Quest[i])<<'\n';           
        }
    }

    return 0;
}

