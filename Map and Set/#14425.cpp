#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL); 
    
    unordered_set<string> str;
    long long total = 0; //S에 포함된 문자열 수

    long long n, m;
    cin >> n >> m;


    for (long long i = 0; i < n; i++) {
        string s;
        cin >> s;
        str.insert({s});
    }

    for (long long i = 0; i < m; i++) {
        string quest;
        cin >> quest;
        if (str.count(quest)) {//S에 문자열이 존재할 경우
            total++;
        }
    }
    cout << total;
    return 0;
}

