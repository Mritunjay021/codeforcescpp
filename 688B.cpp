#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string s = to_string(n);
    string ns;
    
    for (long long i = s.length() - 1; i >= 0; i--) {
        ns += s[i];
    }
    
    string concatenated = s + ns;
    long long result = stoi(concatenated);
    
    cout << result;
    
    return 0;
}




