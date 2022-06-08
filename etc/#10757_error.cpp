#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    string a, b;
    cin >> a >> b;

    int size,index;
    string small,big;

    if (a.size() > b.size()) {
        size = b.size();
        index = a.size() - b.size();
        big = a;
        small = b;
    }
    else {
        size = a.size();
        index = b.size() - a.size();
        big = b;
        small = a;
    }

    string tmp="";

    for (int i = 0; i < size; i++) {
        if(i<index)tmp += '0';
        else {
            tmp += small[i - index];
        }
    }
    cout << tmp << endl;//////////////////////////////
   
    
    int n,plus=0;
    int answer = 0;

    for (int i = size - 1; i >0; i--) {
        n = (tmp[i]-'0') + (big[i]-'0');
        if (plus) n++;
        if (n > 9) {
            plus = 1;
            answer += (n % 10);
        }
        else {
            plus = 0;
            answer += n;
        }
        answer *= 10;
    }

    cout << answer;
    
    return 0;
}