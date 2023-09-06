#include <vector>
#include <iostream>
using namespace std;

int answer = 0; //전역 변수 answer 
int check[200];
void DFS(int n, vector<vector<int>> computers, int i, int j) {

   
    return;
}

int solution(int n, vector<vector<int>> computers) {
    
    DFS(n, computers, 0 , 0);
    return answer;
}

int main() {
    int n; //컴퓨터 개수
    cout << "컴퓨터 개수: ";
    cin >> n;

    //체크 배열 초기화
    check[200] = { false };

    vector<int> network;
    vector<vector<int>> computers;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            int n;
            cin >> n;
            network.push_back(n);
        }
        computers.push_back(network);
    }

    cout << solution(n, computers);
    return 0;
    
}