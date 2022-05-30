#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 

    while (1) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0) break;

        int triangle[3] = { a,b,c }; //크기순 정렬
        sort(triangle, triangle + 3);
        
        if ((pow(triangle[0], 2) + pow(triangle[1], 2)) == pow(triangle[2], 2)) {
            cout << "right\n";
        }
        else cout << "wrong\n";
    }

    return 0;
}