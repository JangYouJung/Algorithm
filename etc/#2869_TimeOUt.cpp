#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int V, A, B, day = 0;
    cin >> A >> B >> V;
    
    int length = 0;
    while (1) {
        day++;
        length += A;
        if (length >= V) {
            break;
        }
        else {
            length -= B;       
        }
        cout << length << endl;///////////////
    }
    cout << day;
    return 0;
}