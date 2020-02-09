#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    long long int max = 0, temp = 0;
    queue <int> q;
    priority_queue <int> pq;
    
    cin >> N >> K;
    
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        q.push(a);
    }
    
    for (int i = 0; i < K; i++) {
        pq.push(q.front());
        q.pop();
    }
    
    while (!pq.empty()) {
        temp += pq.top();
        pq.pop();
        
        if (temp > max) {
            max = temp;
        }
        
        if (!q.empty()) {
            pq.push(q.front());
            q.pop();
        }
    }
    
    cout << max;
    
    return 0;
}
