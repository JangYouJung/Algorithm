#include <string>
#include <vector>
#include <cctype> //타입 확인 헤더파일
#include <cmath>  //소수점 버림 헤더파일
using namespace std;


int solution(string str1, string str2) {
    int answer = 0;

    //각 문자열 소문자->대문자로 변환
    for (int i = 0; i < str1.size(); i++) {
        if (islower(str1[i])) str1[i] -= 32;
    }
    for (int i = 0; i < str2.size(); i++) {
        if (islower(str2[i])) str2[i] -= 32;
    }

    vector<string> S1;  
    for (int i = 0; i < str1.size()-1; i++) { //집합 S1 생성       
        if (isalpha(str1[i])&&isalpha(str1[i+1])) {
            string s;
            s.push_back(str1[i]);
            s.push_back(str1[i + 1]);
            S1.push_back(s);
        }       
    }

    vector<string> S2;
    for (int i = 0; i < str2.size() - 1; i++) { //집합 S2 생성
        if (isalpha(str2[i]) && isalpha(str2[i + 1])) {
            string s;
            s.push_back(str2[i]);
            s.push_back(str2[i + 1]);
            S2.push_back(s);
        }       
    }

    //두 벡터 S1, S2의 교집합 크기 구하기
    double intersection = 0.0;
    for (int i = 0; i < S1.size(); i++) {
        for (int j = 0; j < S2.size(); j++) {
            if (S1[i] == S2[j]) {
                S2[j]="0";                      //테스트 케이스 4,7,9,10,11 오류 체크포인트
                intersection++;
                break;
            }
        }
    }
    
    double sum= S1.size() + S2.size() - intersection; //합집합 크기 구하기

    double Jaccard; // 자카드 유사도
    if (sum == 0) Jaccard = 1;
    else Jaccard = (double)intersection / (double)sum;

    Jaccard *= 65536;
    answer = floor(Jaccard);
    return answer;
}