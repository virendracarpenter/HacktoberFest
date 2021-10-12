#include <bits/stdc++.h>
using namespace std;
int knapsack(int n, vector<int> value, vector<int> weight, int capacity)
{
    if (n == 0 || capacity == 0)
        return 0;
    if (weight[n - 1] > capacity)
        return knapsack(n - 1, value, weight, capacity);
    return max(knapsack(n - 1, value, weight, capacity), value[n - 1] + knapsack(n - 1, value, weight, capacity - weight[n - 1])); //exclude and includes
}
int knapsackDP(int n, vector<int> value, vector<int> weight, int capacity)
{
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    for (int item = 0; item <= n; item++)
    {
        for (int w = 0; w <= capacity; w++)
        {
            if (item == 0 || w == 0)
            {
                dp[item][w] = 0;
            }
            else
            {
                if (w >= weight[item - 1])
                {
                    dp[item][w] = max(dp[item - 1][w], value[item - 1] + dp[item - 1][w - weight[item - 1]]); //exclude, include
                }
                else
                    dp[item][w] = dp[item - 1][w];
            }
        }
    }
    return dp[n][capacity];
}
int knapsackMemo(int n, vector<int> value, vector<int> weight, int capacity, vector<vector<int>> &dp)
{
    if (n == 0 || capacity == 0)
        return 0;
    if (dp[n][capacity] == -1)
    {
        if (weight[n - 1] > capacity)
            dp[n][capacity] = knapsackMemo(n - 1, value, weight, capacity, dp);
        else
            dp[n][capacity] = max(knapsackMemo(n - 1, value, weight, capacity, dp), value[n - 1] + knapsackMemo(n - 1, value, weight, capacity - weight[n - 1], dp));
    }

    return dp[n][capacity];
}
int knapsackDp2(int n, vector<int> value, vector<int> weight, int capacity)
{
    vector<int> dp(capacity + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int w = capacity; w >= 0; w--)
        {
            if (w >= weight[i - 1])
            {
                dp[w] = max(dp[i], value[i - 1] + dp[w - weight[i - 1]]);
            }
        }
    }
    return dp[capacity];
}
int main()
{
    int n;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Enter value and weight for n items" << endl;
    vector<int> value(n, 0);
    vector<int> weight(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> value[i] >> weight[i];
    }
    int capacity;
    cout << "Enter capacity" << endl;
    cin >> capacity;

    //1.
    //cout << "maximum profit " << knapsack(n, value, weight, capacity) << endl;

    //2.
    // cout << "maximum profit " << knapsackDP(n, value, weight, capacity) << endl;
    // 3.
    // vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, -1));

    // cout << "maximum profit " << knapsackMemo(n, value, weight, capacity, dp) << endl;
    // 4.
    cout << "maximum profit " << knapsackDp2(n, value, weight, capacity) << endl;
}
/*
methods
    1)recursive
        Tc: O(2^n)
        Sc:O(1)
    2)dp
        Tc:O(n*capacity)
        Sc: O(n*capacity)
    3)memoization
        Tc:O(n*capacity)
        Sc: O(n*capacity)
    4)dp2
        Tc:O(n*capacity)
        Sc:O(capacity)
    */
/*
01 knapsack all methods
*/