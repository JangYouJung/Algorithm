#include <iostream>
using namespace std;

int get_prime(int n) {
    int prime_num = 0;
    for (int i = n + 1; i < 10000000; i++) {
        bool find = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                find = false;
                break;
            }
        }
        if (find) {
            prime_num = i;
            break;
        }
    }
    return prime_num;
}

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
            prime_num = get_prime(prime_num);
        }
    }

    return 0;
}