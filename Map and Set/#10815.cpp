#include <iostream>
#include <set>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> myCard; //상근이가 가지고 있는 카드 셋

    int N;
    cin >> N;

    for (int i = 0; i < N; i++) { //상근이의 카드 입력 받기
        int n;
        cin >> n;
        myCard.insert(n);
    }

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) { //set의 count매서드를 사용해 매칭
        int m;
        cin >> m;
        cout << myCard.count(m) << " ";
    }

    return 0;
}