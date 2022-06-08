#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    long long V, A, B, day = 0;
    cin >> A >> B >> V;
    
    if ((V - B) % (A - B)) {
        cout<< (V - B) / (A - B) + 1;
    }
    else cout << (V - B) / (A - B);

    return 0;
}