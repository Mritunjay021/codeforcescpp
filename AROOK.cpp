
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        char ar[2];
        cin>>s;
        for(int i=0;i<2;i++)
        {
            ar[i]=s[i];
        }
        for(char ch='a';ch<='h';ch++)
        {
            if(ch!=ar[0])
            {
                cout<< string(1,ch)+ string(1,ar[1]) <<endl;
            }
        }
        for(int i=1;i<=8;i++)
        {
            if(i!=(ar[1]-'0'))
            {
                cout<<string(1,ar[0]) + to_string(i)<<endl;
            }
        }
    }
    return 0;
}





/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) 
    {
        string s;
        cin >> s;

        char ar[2];
        for (int i = 0; i < 2; i++) {
            ar[i] = s[i];
        }

        // Output possible moves excluding the current position
        for (char ch = 'a'; ch <= 'h'; ch++) {
            if (ch != ar[0]) {
                cout << string(1, ch) + string(1, ar[1]) << endl;
            }
        }

        for (int i = 1; i <= 8; i++) {
            if (i != (ar[1] - '0')) {
                cout << string(1, ar[0]) + to_string(i) << endl;
            }
        }
    }

    return 0;
}
*/