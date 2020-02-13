#include <bits/stdc++.h>
using namespace std;

void showpq(priority_queue <int> pq) {
	cout << "\npq: ";
	while (!pq.empty()) {
		cout << pq.top() << ' ';
		pq.pop();
	}
}

int gw (int N, int *H) {
	priority_queue <int> peak;
	priority_queue <int> valley;
	
	int n = 0;
	while (n < N) { //go through array
		if (n == 0)  { //first element
			cout << "\nfirst element";
			
			while (H[n] == H[n+1] && n < N) {
				n++;
			}
			
			if (H[n] > H[n+1]) {
				peak.push(H[n]);
				cout << "\npeak first push: " << H[n];
			}

			n++; //move on to the 2nd element
		}
		
		else if (H[n] < H[n-1]) { //finding valley
			while (H[n] <= H[n-1] && n < N) {
				n++;
                        }
   
                        if (n != N) {
			        cout << "\nvalley: " << H[n-1];
			        valley.push(H[n-1]);
                        }
		}
		
		else if (H[n] > H[n-1]) {
			while (H[n] >= H[n-1] && n < N) {
				n++;
			}
			cout << "\npeak: " << H[n-1];
			peak.push(H[n-1]);
		}
		
		else if (H[n] == H[n-1]) {
			n++;
			cout << "\nskip";
		}
		
		cout << "\n" << n;

	}

	showpq(peak);
	showpq(valley);
	
	//start from flood
	int total = 0, max = 1, lvl;

	while (!peak.empty()) {
		if (peak.top() >= valley.top()) {
			lvl = peak.top();
		}
		
		else {
			lvl = valley.top();
		}
		
		cout <<"\nlevel: " << lvl << "\n";
		
		while (peak.top() == lvl && !peak.empty()) {
			cout << "test1+ ";
			peak.pop();
			total++;
		}
		
		while (valley.top() == lvl && !valley.empty()) {
			cout << "test2- ";
			valley.pop();
			total--;
		}

		if (total > max) {
			max = total;
		}
		cout << "\ntotal: " << total;
		cout << "\nmax: " << max;
	}	
	showpq(peak);
	showpq(valley);
	
	cout << "\ntotal: " << total;
	cout << "\nmax: " << max;
	
	return 0;
}

int main() {
	int N; cin >> N;
	int H[N];
	for (int i = 0; i < N; i++) {
		cin >> H[i];
	}
	gw(N, H);
	
	return 0;
}
