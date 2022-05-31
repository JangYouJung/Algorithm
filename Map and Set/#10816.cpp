#include <iostream>
#include <map>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    
    map<int, int> card;

    int N;//가지고 있는 숫자 카드 개수
    cin >> N;

    int n;
    for (int i = 0; i < N; i++) {
        cin >> n;
        if (card.count(n)) {
            card[n]++;
        }
        else {
            card.insert({n,1});
        }
    }

    int M; //문제 수
    cin >> M;

    for (int i = 0; i < M; i++) {
        cin >> n;
        cout << card[n] << " ";
        /*
        * 
        * 밑에 코드와 같이 map에 있/없 나눠서 if문을 구성하면
        * 시간 초과가 생긴다. map에 없는 키의 value 값에 대해서는
        * 0을 출력하는 것을 유의하고, 불필요한 코드를 줄이자.
        * 
        * 
        if (card.count(n)) {//상근이가 가지고 있는 카드일 경우
            cout << card[n] << ' ';
        }
        else {//상근이한테 없는 카드일 경우
            cout << 0 << ' ';
        }*/
    }

    return 0;
}
