#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> num;
int N;
int binary_search(int start, int end, int m) {
    if (start > end) return 0;
    if (num[(start + end) / 2 ] == m) return 1;
    else if (num[(start + end) / 2] > m) {
        return binary_search(start, (start + end) / 2 - 1, m);
    }
    else {
        return binary_search((start + end) / 2 + 1, end, m);
    }   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    cin >> N;

    for (int i = 0; i < N; i++) {
        int n;
        cin >> n;
        num.push_back(n);
    }
    sort(num.begin(), num.end());

    int M;
    cin >> M;
    for (int i = 0; i < M; i++) {
        int m;
        cin >> m;
        cout << binary_search(0,N-1,m) << '\n';
    } 
    return 0;
}