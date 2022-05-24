#include <iostream>
#include <vector>
#define rep(i,n) for(int i=0; i<n; i++)
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<string> c;
	int n, m; // n:세로, m:가로
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		c.push_back(s);
	}

	int bm = 2500, wm=2500; 

	// 1. 검하검하-순으로 칠할 때
	for (int x = 0; x <= m - 8; x++) {
		for (int y = 0; y <= n - 8; y++) {
			int i = x, j;
			int b = 0;
				for (; i < x+8; i++) {	
					j = y;
					for (j=y; j < y+8; j++) {
						if (i % 2 == 0 && j % 2 == 0) { //짝짝
							if (c[j][i] == 'W') b++;
						}
						else if (i % 2 == 0 && j % 2 != 0) { //짝홀
							if (c[j][i] == 'B') b++;
						}
						else if (i % 2 != 0 && j % 2 == 0) { //홀짝
							if (c[j][i] == 'B') b++;
						}
						else { //짝홀
							if (c[j][i] == 'W') b++;
						}
					}		
				}
			if (b < bm) bm = b;
		}
	}

	// 2. 하검하검-순으로 칠할 때
	for (int x = 0; x <= m - 8; x++) {
		for (int y = 0; y <= n - 8; y++) {
			int i = x, j;
			int b = 0;
			for (; i <x+ 8; i++) {
				for (j=y; j < y+8; j++) {
					if (i % 2 == 0 && j % 2 == 0) { //짝짝
						if (c[j][i] == 'B') b++;
					}
					else if (i % 2 == 0 && j % 2 != 0) { //짝홀
						if (c[j][i] == 'W') b++;
					}
					else if (i % 2 != 0 && j % 2 == 0) { //홀짝
						if (c[j][i] == 'W') b++;
					}
					else { //짝홀
						if (c[j][i] == 'B') b++;
					}
				}
			}
			if (b < wm) wm = b;
		}
	}


	if (bm < wm) cout << bm;
	else cout << wm;

	return 0;
}
