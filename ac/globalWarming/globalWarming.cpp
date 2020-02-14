#include <bits/stdc++.h>
using namespace std;

int gw (int N, int *H) {
	priority_queue <int> peak;
	priority_queue <int> valley;
	
	int n = 0;
	while (n < N) { //go through array
		if (n == 0)  { //first element
			while (H[n] == H[n+1] && n < N) {
				n++;
			}
			
			if (H[n] > H[n+1]) {
				peak.push(H[n]);
			}
			n++; //move on to the 2nd element
		}
		
		else if (H[n] < H[n-1]) { //finding valley
			while (H[n] <= H[n-1] && n < N) {
				n++;
			}
			
			if (n != N) {
		    	valley.push(H[n-1]);
			}
		}
		
		else if (H[n] > H[n-1]) {
			while (H[n] >= H[n-1] && n < N) {
				n++;
			}
			peak.push(H[n-1]);
		}
		
		else if (H[n] == H[n-1]) {
			n++;
		}
	}

	//start from flood
	int total = 0, max = 1, lvl;

	while (!peak.empty()) {
		if (peak.top() >= valley.top()) {
			lvl = peak.top();
		}
		
		else {
			lvl = valley.top();
		}
		
		while (peak.top() == lvl && !peak.empty()) {
			peak.pop();
			total++;
		}
		
		while (valley.top() == lvl && !valley.empty()) {
			valley.pop();
			total--;
		}

		if (total > max) {
			max = total;
		}
	}	

	cout << max;
	
	return 0;
}

int main() {
    long long int N;
    cin >> N;
    int H[N];
    for (int i = 0; i < N; i++) {
        cin >> H[i];
    }
	gw(N, H);
	
	return 0;
}
