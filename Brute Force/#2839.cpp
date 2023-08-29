#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	
	int min_total = 999999;

	for ( int i = 0 ; ; i++) {
		if (3 * i > N) break;
		for ( int j = 0; ; j++) {
			if (3 * i + 5 * j == N) {
				if (min_total > i + j) min_total = i + j;
			}
			if (3 * i + 5 * j > N) break;
		}
	}
	if (min_total == 999999) cout << -1; // 초깃값이 변하지 않았으면 -1 출력
	else cout << min_total;

	return 0;
}