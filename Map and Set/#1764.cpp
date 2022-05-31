#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>
using namespace std;

unordered_set<string> heard;
vector<string> stranger;
int n, m;
string name;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    
    cin >> n >> m;

    for (int i = 0; i < n; i++) {//듣도 못한 사람
        cin >> name;
        heard.insert(name);
    }
    for (int i = 0; i < m; i++) {//보도 못한 사람
        cin >> name;
        if (heard.count(name)) {//듣도 보도 못한 경우
            stranger.push_back(name);
        }
    }

    sort(stranger.begin(), stranger.end());

    cout << stranger.size() << '\n';
    for (int i = 0; i < stranger.size(); i++) {
        cout << stranger[i] << '\n';
    }
    
    return 0;
}
