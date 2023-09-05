#define _CRT_SECURE_NO_WARNINGS // strtok 보안 경고로 인한 컴파일 에러 방지
#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


int answer = 0; //전역 변수 answer

void DFS(vector<int> numbers, int target, int sum, int index) {
    if (index == numbers.size()) { // 끝까지 탐색했다면 재귀 함수 탈출
        if (target == sum) answer++;
        return;
    }

    DFS(numbers, target, sum + numbers[index], index + 1);
    DFS(numbers, target, sum - numbers[index], index + 1);
}

int solution(vector<int> numbers, int target) {
    DFS(numbers, target, 0, 0);
    return answer;
}

int main() { //테스트용 메인 함수
   
    vector<int> numbers;

    //공백이 포함된 정수 배열 입력 받기
    char str[100], *s;
    int num[100], i, cnt = 0;

    gets_s(str);
    
    for (s = strtok(str, " "); s; s = strtok(NULL, " "), cnt++) // strtok 에 구분자 지정
        if (sscanf(s, "%d", &num[cnt]) < 1)
            break;

    for (i = 0; i < cnt; i++) {
        cout << num[i] << endl;
        numbers.push_back(num[i]);
    }
    //strktok 사용 방법 참고: https://cs10.tistory.com/11


    //타겟 넘버 입력 받기
    int target;
    cout << "SUM: ";
    cin >> target;
    
    cout << "answer: " << solution(numbers, target) << endl;

    return 0;
}