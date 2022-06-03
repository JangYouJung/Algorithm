#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n; //회의 개수
    cin >> n;
    vector<vector<int>> conference;
    int max = 0;//회의 마지막 시간 구하기

    int start, end, time;
    for (int i = 0; i < n; i++) {
        cin >> start >> end;

        if (max < end) {
            max = end;
        }

        time = end - start;

        vector<int> tmp;
        tmp.push_back(time);//회의 시간
        tmp.push_back(start);
        tmp.push_back(end);
        conference.push_back(tmp);
    }
    sort(conference.begin(), conference.end());

    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    for (int k = 0; k < conference.size(); k++) {////////////
        cout << conference[k][1] <<" "<< conference[k][2] << endl;/////////////
    }
    cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    int answer = 0;//최대 회의 개수
    //vector<int> reserved;
    map<int, bool> reserved;

    for (int i = 0; i < max + 1; i++) {//0~max까지
        reserved.insert({ i , false });//예약표 만들기
    }

    for (int i = 0; i < n; i++) {
        cout << "i: " << i << endl;/////////////////////
        for (int j = conference[i][1]; j < conference[i][2] + 1; j++) {
            cout << "j: " << i << endl;/////////////////////
            if (reserved[j] == true) {
                cout << "reserved!" << endl;/////////////
                break;
            }
            else {
                answer++;
                cout << "#reserving" << endl;/////////////
                for (int u = conference[i][1]; u < conference[i][2] + 1; u++) {
                    reserved[u] = true;
                }
            }
        }

    }
    for (int k = 0; k < reserved.size(); k++) {
        cout << reserved[k] << endl;/////////////
    }
    cout << answer;
    return 0;
}
