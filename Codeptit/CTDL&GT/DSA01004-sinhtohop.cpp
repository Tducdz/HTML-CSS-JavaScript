#include<bits/stdc++.h>

using namespace std;

int n, k;
int a[20];

void print()
{
    for(int i = 1; i <= k; ++i) cout << a[i];
    cout << ' ';
}

void Try(int i)
{
    for(int j = a[i - 1] + 1; j <= n - k + i; ++j)
    {
        a[i] = j;
        if(i == k) print();
        else Try(i + 1);
    }
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        Try(1);
        cout << endl;
    }
    return 0;
}