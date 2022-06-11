#include <iostream>
#include <vector>
#include <string>
using namespace std;

int find(int sugar) {
    int bag = 0;
    
    bag = sugar / 5;
    sugar %= 5;

    bag = sugar / 3;
    sugar %= 3;
    
    if (sugar < 3 && sugar > 0) {
        return -1;
    }

    return bag;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    
    int sugar, bag = 0;
    cin >> sugar;

    int tmp;
    if (sugar % 5 == 0) {
        tmp = find(sugar);
        bag = (sugar / 5);
        if (tmp!= -1 && tmp < bag) bag = tmp;
    }
    else if (sugar % 3 == 0) {
        tmp = find(sugar);
        bag = (sugar / 3);
        if (tmp != -1 && tmp < bag) bag = tmp;
    }
    else find(sugar);

    cout << bag;

    return 0;
}