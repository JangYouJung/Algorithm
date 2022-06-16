#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int N;
    cin >> N;

    int prime_num = 2;

    if (N == 1) return 0;
    while (N > 1) {
        if (N % prime_num == 0) {
            N /= prime_num;
            cout << prime_num << '\n';
        }
        else {
            prime_num++;
        }
    }

    return 0;
}