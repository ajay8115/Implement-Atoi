// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

bool isvalidString(string s)
{
    if (s[0] != '-' and (s[0] < '0' or s[0] > '9'))
    {
        return false;
    }

    for (int i = 1; i < s.size(); i++)
    {
        char c = s[i];
        if (c > '9' or c < '0')
        {
            return false;
        }
    }

    return true;
}

int atoi(string s)
{
    if (!isvalidString(s))
    {
        return -1;
    } 
    
    reverse(s.begin(), s.end());
    int n = s.size();

    if (s[n - 1] == '-')
    {
        int sum1 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            int k = s[i] - '0';
            sum1 += k * pow(10, i);
        }

        return (-1) * sum1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int k = s[i] - '0';
        sum += k * pow(10, i);
    }

    return sum;
}