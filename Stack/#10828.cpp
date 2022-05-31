#include <iostream>
#include <string>
#include <stack>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    stack<int> Stack;
    
    int n;
    cin >> n;

    string quest;
    for (int i = 0; i < n; i++) {        
        cin >> quest;
        if (quest == "top") {
            if (Stack.size()) {
                cout << Stack.top() << '\n';
            }
            else cout << -1 << '\n';
        }
        else if (quest == "pop") {
            if (Stack.size()) {
                cout << Stack.top() << '\n';
                Stack.pop();
            }
            else cout << -1 << '\n';
        }
        else if (quest == "size") {
            cout << Stack.size() << '\n';
        }
        else if (quest == "empty") {
            cout << Stack.empty() << '\n';
        }
        else {
            int m;
            cin >> m;
            Stack.push(m);
        }
    }

    return 0;
}
