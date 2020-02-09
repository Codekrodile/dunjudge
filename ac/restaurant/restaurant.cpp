#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m, s, max = 0, temp;
    cin >> n >> m >> s;
    
    int s1[m], s2[s];
    
    for (int i = 0; i < m; i++) {
        cin >> s1[i];
    }
    
    for (int i = 0; i < s; i++) {
        cin >> s2[i];
    }
    
    sort(s1, s1 + m);
    sort(s2, s2 + s);
    
    for (int i = 0; i < n; i++) {
        temp = s1[i] + s2[n-1-i];
        
        if (temp > max) {
            max = temp;
        }
    }
    
    cout << max;
    
    return 0;
}
