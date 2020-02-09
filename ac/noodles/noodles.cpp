#include <bits/stdc++.h>
using namespace std;

void showpq(priority_queue <int> pq) {
    priority_queue <int> a = pq;
    while (!a.empty()) {
        cout << a.top() << ' ';
        a.pop();
    }
    cout << "\n";
}

int main() {
    int d = 1, n, t = 0;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    sort(arr, arr + n);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] >= d) {
            t++;
            d++;
        }
    }
    
    cout << t;
    
    return 0;
}
