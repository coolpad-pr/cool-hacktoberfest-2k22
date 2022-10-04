
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        sort(s.begin(), s.end());
        int ln = s[n-1].size();
        string ans;
        
        for(int i=0;i<s[0].size();i++){
            if(s[0][i]==s[n-1][i])
                ans.push_back(s[0][i]);
            else break;
        }
        
        return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<string> st(n, "");
    
    for(int i=0;i<n;i++)
        cin >> st[i];
        
    string res = longestCommonPrefix(st);
    
    cout << res;

    return 0;
}
