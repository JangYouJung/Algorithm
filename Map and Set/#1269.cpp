#include <iostream>
#include <set>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int n,m;
    cin >> n >> m;

    set<int> N;
    int k;
    for (int i = 0; i < n; i++) {
        cin >> k;
        N.insert(k);
    }

    int num = 0;
    for (int i = 0; i < m; i++) {
        cin >> k;
        if(N.find(k)!=N.end()){
            num++;
        }
    }
    cout << n + m - (2 * num);
    return 0;
}