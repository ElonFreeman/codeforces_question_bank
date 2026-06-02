#include<bits/stdc++.h>
using namespace std;

struct testcase
{
    int length;
    vector<int> arr;
};

int main(void)
{
    int t; cin >> t;
    vector<testcase> testset(t);
    for(int i=0;i<t;i++)
    {
        cin >> testset[i].length;
        for(int j=0;j<testset[i].length;j++)
        {
            int inp; cin >> inp;
            testset[i].arr.push_back(inp);
        }
    }

    

    return 0;
}