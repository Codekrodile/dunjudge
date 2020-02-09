#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a, b;
	int n, shiftx, shifty;
	cin >> n >> a >> b;
	pair <long long int, int> arr[n];

	shiftx = 0 - a;
	shifty = 0 - b;
	
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		a = a + shiftx;
		b = b + shifty;
		
		if (a < 0) {
			a *= -1;
		}
		
		if (b < 0) {
			b *= -1;
		}
				
		arr[i] = make_pair(a + b, i + 1);
	}
	
	sort(arr, arr + n);
	
	for (int i = 0; i < n; i++) {
		cout << arr[i].second << ' ';
	}
	
	return 0;
}
