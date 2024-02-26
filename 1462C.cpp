#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum = 0, min = INT_MAX, f = 1;
        cin >> n;
        string s = to_string(n);
        int l = s.length();
        if (l == 1) {
            cout << n << "\n";
            continue;
        }
        for (int i = 0; i <= pow(n,2); i++) 
        {   
            for(int j=0;j<pow(n,2);j++)
            {
                string temp = to_string(i) + to_string(j);
            int digitCount[10] = {0}; 
            bool isValid = true;
            for (char c : temp) {
                digitCount[c - '0']++;
                if (digitCount[c - '0'] > 1) {
                    isValid = false;
                    break;
                }
            }
            if (isValid) {
                for (char k : temp)
                    sum += (k - '0');
                if (sum == n && stoi(temp) < min)
                    min = stoi(temp);
                sum = 0;
            }
            }
            
        }
        if (min != INT_MAX)
            cout << min << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}