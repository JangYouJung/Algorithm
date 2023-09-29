#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> A;
    vector<vector<int>> B;
    vector<vector<int>> SUM;

    int column;
    cin >> column;

    int row;
    cin >> row;

    for (int i = 0; i < column; i++) {//A 벡터 채우기
        vector<int> line;
        for (int j = 0; j < row; j++) {
            int n;
            cin >> n;
            line.push_back(n);
        }
        A.push_back(line);
    }
    for (int i = 0; i < column; i++) {//B 입력 받아서 A와 더해 바로 SUM 벡터 채우기
        vector<int> line;
        for (int j = 0; j < row; j++) {
            int sum;
            cin >> sum;          
            sum += A[i][j];
            line.push_back(sum);
        }
        SUM.push_back(line);
    }

    for (int i = 0; i < column; i++) {//합 출력
        for (int j = 0; j < row; j++) {
            cout << SUM[i][j]<<" ";
        }
        cout << endl;
    }

    return 0;
}