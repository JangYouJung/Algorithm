#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<int>> v;
vector<int> quest;

int hotel(int floor, int room, int client) {
    int num = 0;

    if (client % floor == 0) {
        num += floor;//층수
        num *= 100;
        num += (client / floor);//호수
    }
    else {
        num += (client % floor);//층수
        num *= 100;
        num += (client / floor + 1);//호수
    }

    return num;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);

    int n;//문제 수
    cin >> n;

    for (int i = 0; i < n; i++) {
        int floor, room, client;
        cin >> floor >> room >> client;
        cout<<hotel(floor, room, client)<<'\n';
    }

    return 0;
}