#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);
    cout.tie(NULL);

    //전파 개수 입력 받기
    int size;
    cin >> size;
   
    //전파 분석: regex 정규식 이용해서 간단히 구현
    regex pattern("(100+1+|01)+");
           
    for (int i = 0; i < size; i++) {
        string wave;
        cin >> wave;
        cout << (regex_match(wave, pattern) ? "YES\n":"NO\n");
    }
    
    return 0;
}