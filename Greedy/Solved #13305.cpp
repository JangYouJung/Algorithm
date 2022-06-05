#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int N;//도시 개수
    cin >> N;

    long long length, price;//각각 도로 길이, 주유소 리터당 가격
    vector<long long> road;
    vector<long long> oil;


    //[1] 도로 길이 입력 받기
    for (int i = 0; i < N - 1; i++) {
        cin >> length;
        road.push_back(length);
    }

    //[2] 각 도시의 유가 입력 받기
    for (int i = 0; i < N ; i++) {
        cin >> price;
        oil.push_back(price);
    }
    
    long long min = oil[0];
    long long cost = road[0] * oil[0]; //최소 비용

    //[3] Greedy 알고리즘으로 최소 비용 찾기
    for (int i = 1; i < N - 1; i++) {
        if (oil[i] < min) {
            cost += oil[i] * road[i];
            min = oil[i];
        }
        else {
            cost += min * road[i];
        }
    }
    
    cout << cost;

    return 0;
}