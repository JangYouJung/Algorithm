#include <iostream>
#include <string>
using namespace std;

int main() {
	int N = 0;
	cin >> N;

	int count = 0;

	for (int i = 666; ; i++) {
		string S = to_string(i);
		if (S.find("666") != string::npos) count++;
		if (count == N) {
			cout << i;
			break;
		}
	}

	return 0;
}