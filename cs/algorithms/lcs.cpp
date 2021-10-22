#include <bits/stdc++.h>
using namespace std;
/*int lcs(string str1,string str2,int l1,int l2)
{
    if(l1==0 || l2==0)
        return 0;
    if(str1[l1-1]==str2[l2-1])
        return 1 + lcs(str1, str2, l1 - 1, l2 - 1);
    return max(lcs(str1, str2, l1, l2 - 1), lcs(str1, str2, l1 - 1, l2));
}*/
int main()
{
    string str1, str2;
    cout << "Enter two strings" << endl;
    cin >> str1 >> str2;

    cout << "lcs is ";
    //2
    //cout<< lcs(str1, str2, str1.size(), str2.size())<<endl;

    //3
    int l1 = str1.size(), l2 = str2.size();
    vector<vector<int>> lcs(l1 + 1, vector<int>(l2 + 1, 0));
    for (int i = 0; i <= l1; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            if (i == 0 || j == 0)
                lcs[i][j] = 0;
            else if (str1[i - 1] == str2[j - 1])
                lcs[i][j] = 1 + lcs[i - 1][j - 1];
            else
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
        }
    }
    cout << lcs[l1][l2] << endl;

    return 0;
}
/*
longest common subsequence
n=length of string
number of possible subsequences of legth n= (2^n-1)
    mehtods
        1)bruteforce
            generate subsequence then compare both subsequence
            Tc: O(n* 2^n)
        2)recursive
            Tc: O(2^n)
        3)Dp:
            Tc: O(n^2)
            
*/