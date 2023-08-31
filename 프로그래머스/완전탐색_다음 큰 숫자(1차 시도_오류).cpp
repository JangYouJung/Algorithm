#include <string>
#include <vector>
#include <bitset>
using namespace std;

int solution(int n) {
    int answer = 0;
    bitset<32> bit1 = bitset<32>(n);
    string N = bit1.to_string();
    int N_count = 0;
    
    for(int i =0; i<32; i++){ //n의 2진수에서 1의 갯수 구하기
        if(N[i]=='1') N_count++;
    }
    
        
    int k = n + 1;
    while(1){
        bitset<32> bit2 = bitset<32>(k);
        string K = bit2.to_string();
        int K_count = 0;
        for(int i =0; i<32; i++){ //n의 2진수에서 1의 갯수 구하기
            if(K[i]== '1') K_count++;
        }
        if(N_count==K_count) {
            answer = k;
            break;
        }
    }    
    
    return answer;
}
