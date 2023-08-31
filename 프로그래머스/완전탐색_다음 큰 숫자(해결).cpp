#include <string>
#include <vector>
#include <bitset>
using namespace std;

int solution(int n) {
    int answer = 0;

    bitset<32> bit1 = bitset<32>(n);        // n을 2진수로 변환
    string N = bit1.to_string();            // 문자 탐색의 용이성을 위해 이진수를 string으로 형변환
    int N_count = 0;                        //n의 이진수에서 1의 개수
    
    for(int i =0; i<32; i++){               //n의 2진수에서 1의 개수 구하기
        if(N[i]=='1') N_count++;
    }
    
        
    int k = n + 1;                          //k는 n+1부터 시작해서 완전 탐색
    while(1){
        bitset<32> bit2 = bitset<32>(k);
        string K = bit2.to_string();
        int K_count = 0;
        for(int i =0; i<32; i++){           //k의 2진수에서 1의 개수 구하기
            if(K[i]== '1') K_count++;
        }
        if(N_count==K_count) {              //n 이진수와 1의 개수 똑같은 k 값 찾으면 while문 탈출
            answer = k;
            break;
        }
        k++;                               
    }    
    
    return answer;
}