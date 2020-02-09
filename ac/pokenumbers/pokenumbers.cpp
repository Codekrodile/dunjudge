#include <bits/stdc++.h>
#include <string>
using namespace std;

string binary(int x) { //16 digits
	string s = "", a;
	
	while (x != 0) {
		stringstream ss;
		ss << x%2;
		ss >> a;
		s = a + s;
		x = x/2;
		//cout << a << ' ' << s << ' ' << x << endl;
		//int a = 1234;
		//cout << a/3 << ' ' << a/3 * 3 << endl;
	}
	return s;
}

int main() {
	int x, y, total = 0;
	cin >> x >> y;
	string a, b, s = "";
	a = binary(x);
	b = binary(y);
	
	while (a.size() < b.size()) {
		a = "0" + a;
	}
	
	while (b.size() < a.size()) {
		b = "0" + b;
	}
	//cout << a << ' ' << b << endl;
	
	int end = a.size();
	for (int i = 0; i < end; i++) {
		s = s + a[i] + b[i];
	}
	
	//cout << s << endl;
	
	int n = 0;
	for (int i = s.size()-1; i > -1; i--) {
		//cout << "s[i]: " << s[i] << endl;
		if (s[i] == '1') {
			total += pow(2, n);
		}
		//cout << "total: " << total << endl;
		n++;
	}
	
	cout << total;
	
	return 0;
}


	/*
	string s1 = "testing", s2 = "1234567", s = "steing: ";
	int n = s.size();
	for (int i = 0; i < n; i++) {
		s = s + s1[i] + s2[i];
	}
	cout << s;
	*/
	
	/*
    string s = "12345"; 
  
    // object from the class stringstream 
    stringstream n(s); 
  
    // The object has the value 12345 and stream 
    // it to the integer x 
    int x = 0; 
    n >> x; 
  
    // Now the variable x holds the value 12345 
    cout << "Value of x : " << x; 
  
    return 0; 
    */
