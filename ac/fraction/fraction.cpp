#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y; cin >> x >> y;
	int temp, a = x, b = y;
	
	//keep a as the bigger number
	if (a < b) {
		temp = b;
		b = a;
		a = temp;
	}

	while (a % b != 0) {
		temp = a % b;
		a = b;
		b = temp;
	}
	
	cout << x/b << '/' << y/b << endl;
	
	return 0;
}
