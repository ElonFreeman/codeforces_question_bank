#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n; cin >> n;
    vector<string> strs(n);
    for(string &traverse:strs)
    {
        cin >> traverse;
    }

    for(int i=0;i<n;i++)
    {
        if(size(strs[i])>10)
        {
            cout << strs[i].front() << size(strs[i])-2 << strs[i].back() << endl;
        }
        else
        {
            cout << strs[i] << endl;
        }
    }

    return 0;
}