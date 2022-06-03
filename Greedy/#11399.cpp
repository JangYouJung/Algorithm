#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n = 0;
    cin >> n;

    int time;
    vector<int> people;
    for (int i = 0; i < n; i++) {
        cin >> time;
        people.push_back(time);
    }
    
    sort(people.begin(), people.end());

    int answer = 0;
    int m = n;
    for (int i = 0; i < n; i++) {
        answer += (people[i]*(m--));
    }
    cout << answer;

    return 0;
}
