#include <iostream>
#include <vector>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); //시간 감축

    int n, k;
    cin >> n >> k;

    vector<int> coin;
    int value;
    int answer = 0;

    for (int i = 0; i < n; i++) {
        cin >> value;
        coin.push_back(value);
    }

    //Greedy Algorithm
    for (int i = n - 1; i > -1; i--) {
        while (k >= coin[i]) {           
            k -= coin[i];
            answer++;
            if (k == 0) {
                cout << answer;
                break;
            }
        }        
    }
    
    return 0;
}
