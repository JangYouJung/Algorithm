#include <string>
#include <vector>
#include <iostream>
using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    bool found = false;
    for (int i = 0; i < participant.size(); i++) {
        for (int j = 0; j < completion.size(); j++) {
            if (participant[i] == completion[j]) { 
                completion[j] = "0";//동명이인을 고려해서 이미 체크한 이름은 변경
                break;
            }
            else if ((j + 1) == completion.size()) { //못찾았으면 answer에 넣기
                answer = participant[i];
                found = true;
            }
        }
        if (found) break;
    }
    return answer;
}