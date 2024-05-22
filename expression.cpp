#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Calculate the six possible expressions
    int expression1 = a * b * c;
    int expression2 = a + b + c;
    int expression3 = (a + b) * c;
    int expression4 = a * (b + c);
    int expression5 = a + b * c;
    int expression6 = a * b + c;

    // Find and print the maximum value
    int result = max({expression1, expression2, expression3, expression4, expression5, expression6});
    cout << result;

    return 0;
}
