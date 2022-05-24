#include <iostream>
#include <vector>
int self_number(int n);
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    vector<int>::iterator iter = v.begin();

    for (int i = 1; i <= 10000; i++) {
        v.push_back(i);
       
    }

    for (int i = 1; i <= 10000; i++) {
        for (int j = 0; j < v.size(); j++) {
            if (v[j] == self_number(i)) {
                v[j] = 0;
                break;
            }
        }
    }

    for (int i = 0; i <v.size(); i++) {
        if (v[i] != 0) {
            cout << v[i] << "\n";
        }
    }
    return 0;
}

int self_number(int n) {
    if (n < 10) return n + n;
    else if (n < 100) return n + n / 10 + n % 10;
    else if (n < 1000) return n + n / 100 + n % 100 / 10 + n % 10;
    else return n + n / 1000 + n % 1000 / 100 + n % 1000 % 100 / 10 + n % 10;
}