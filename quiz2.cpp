#include <iostream>
#include<string>
#include <ctype.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int b[100] = { 0 };
    int temp[100] = { 0 };
    int exp = 0;
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (isdigit(a[i]) && isdigit(a[i + 1]))
        {
            temp[exp] = a[i]-'0';
            exp++;
        }
        else if (isdigit(a[i]))
        {
            temp[exp] = a[i]-'0';
            int ee = exp + 1;
            for (int j = 0; j < ee; j++)
            {
                b[count] = b[count] + (temp[j] * pow(10, exp));
                exp--;
            }
            exp = 0;
            count++;
        }
    }
    int c[10000] = { 0 };
    for (int i = 0; i < count; i++)
    {
        c[b[i]]++;
    }
    for (int i = 0; i < 10000; i++)
    {
        if (c[i] % 2 != 0)
        {
            cout << i;
        }
    }
}
