#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = 0;
	int a = s.size();
	
	for (int i = 0; i < a; i++) {
		if (i % 2 == 0) {
			n += (int)s[i] - 48;
		}
		
		else {
			n -= (int)s[i] - 48;
		}
		//cout << i << ' ' << (int)s[i] << ' ' << n << endl;
	}
	
	//cout << n << endl;
		
	if (n % 11 == 0) {
		cout << "YES";
	}
	
	else {
		cout << "NO";
	}

	return 0;
}
