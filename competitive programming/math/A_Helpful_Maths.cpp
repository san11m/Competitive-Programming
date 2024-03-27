#include <bits/stdc++.h>

using namespace std;

int main()
{
    string v,s;
    cin >> v;
    for (int i = 0; i < v.size(); i = i + 2)
    {
        s.push_back(v[i]);
    }
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size() - 1; i++)
    {
        cout << s[i] << "+";
    }
    cout << s[s.size() - 1] << endl;

    return 0;
}