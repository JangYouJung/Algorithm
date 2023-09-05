#include <string>
#include <vector>

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
