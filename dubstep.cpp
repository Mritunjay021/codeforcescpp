#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, ns, str;
    int o, c = 0;
    cin >> s;

    for (int i = 0; i < s.length(); ) {
        if (s.substr(i, 3) == "WUB") {
            i += 3;
            ns += " ";
        } else {
            ns += s[i];
            i++;
        }
    }

    for (o = 0; o < ns.length(); o++) {
        if (ns[o] == ' ')
            continue;
        else
            break;
    }

    for (c = ns.length(); c > 0; c--) {
        if (ns[c - 1] == ' ')
            continue;
        else
            break;
    }

    str = ns.substr(o, c - o);
    cout << str;

    return 0;
}











/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v;
    for(int i=0;i<s.length();i++)
    {
        if(i==0 && s.substr(i,i+3)=="WUB")
        {
            i+=3;
            v.push_back(i);
        }
        else if(i==s.length()-3 && s.substr(i,i+3)=="WUB")
        {
            v.push_back(i);
        }
        else if(s.substr(i,i+3)=="WUB")
        {
            v.push_back(i);
            i+=3;
            v.push_back(i);
        }
        
    }
    for(int i=0;i<v.size();i+=2)
    {
        cout<<s.substr(v[i],v[i+1]);
    }
    return 0;
}*/


/*string s,ns,str;
    int o,c=0;   
    cin>>s;
    for(int i=0;i<s.length(); )
    {
        if((s.substr(i,i+3))=="WUB")
        {
            i+=3;
            ns+=" ";
        }
        else
        {
            ns+=s[i];
            i++;
        }
    }
    for(o=0;o<ns.length();o++)
    {
        if(ns[o]==' ')
        continue;
        else
        break;
    }
    for(int c=ns.length();c>0;c--)
    {
        if(ns[c-1]==' ')
        continue;
        else
        break;
    }
    str=ns.substr(o,c-o);
    cout<<str;
    return 0;*/