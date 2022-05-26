#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int size;
    cin >> size;

    vector<string> wave;

    //[1] 전파 입력 받기
    for (int i = 0; i < size; i++) {
        string s;
        cin >> s;
        wave.push_back(s);
    }

    //[2] 전파 분석
    //패턴 A= '100+1+' 패턴 B= '01'
    for (int i = 0; i < size; i++) {
        bool yes = false;
        for (int j = 0; j < wave[i].size(); j++) {
            if (j == wave[i].size() - 1) {//마지막 인덱스에서 break
                break;
            }
            if (wave[i][j] == '1' && wave[i][++j] == '0') {//패턴A
                if (j == wave[i].size()-1) {//마지막 인덱스면 break
                    break;
                }
                else if (wave[i][++j] == '0') { 
                    for (j; j < wave[i].size(); j++) {// A에서 0이 반복                        
                        if (wave[i][j] == '1') {
                            yes = true;
                            j++;
                            break; //1001 끝
                        }
                    }
                    if (yes) { //A에서 1이 반복
                        for (j; j < wave[i].size(); j++) {             
                            if (wave[i][j] == '0') {
                                if (wave[i][j - 2] == '1') {
                                    j--;
                                    break;
                                }
                            }
                        }
                    }
                    else break;
                }

            }
            else if (wave[i][j] == '0' && wave[i][++j] == '1') {//패턴B 완성
            }
            else {
                yes = false;
                break;
            }
        }
        if (yes) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}