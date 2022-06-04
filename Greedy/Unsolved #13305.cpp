#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int N;//도시 개수
    cin >> N;

    int length, price;//각각 도로 길이, 주유소 리터당 가격
    int cost = 0; //최소 비용
    vector<int> road;
    vector<int> oil;

    for (int i = 0; i < N - 1; i++) {
        cin >> length;
        road.push_back(length);
    }
    int min = 1000000001, mIndex ;
    for (int i = 0; i < N - 1 ; i++) {
        cin >> price;
        oil.push_back(price);
        if (price < min) { //가장 저렴한 유가의 도시 찾기
            min = price;
            mIndex = i;
        }
    }
    cin >> price;//마지막 도시의 유가는 필요 없음
    

    for (int i = 0; i < N - 1; i++) {
        if (i < mIndex) {//최저 유가 도시 도착 전에는 다음 도시 가기 위한 기름만 구매
            cost += oil[i] * road[i];
        }
        else if (i == mIndex) {//최저 유가 도시에서 필요한 기름 다 사기
            int total = 0;
            while (i < N - 1) {
                total += road[i++];
            }
            cost += oil[mIndex] * total;
            break;
        }
    }
    
    cout << cost;

    return 0;
}