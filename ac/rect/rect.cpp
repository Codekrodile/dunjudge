#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x1 = -1, x2 = 10001, y1 = -1, y2 = 10001;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		
		if (a > x1) {
			x1 = a;
		}
		
		if (b < x2) {
			x2 = b;
		}
		
		if (c > y1) {
			y1 = c;
		}
		
		if (d < y2) {
			y2 = d;
		}
	}
	
	if (x1 < x2 && y1 < y2) {
		cout << (x2-x1) * (y2-y1);
	}
	
	else {
		cout << 0;
	}
	
	return 0;
}
