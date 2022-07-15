#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    long long n;
    cin>>n;
    
    vector<long long> N;
    while(n){
        N.push_back(n%10);
        if(n<10) break;
        else n/=10;
    }
    
    sort(N.begin(),N.end());

    for(int i =0; i<N.size(); i++){
        cout<<N[i];
    }
    
}