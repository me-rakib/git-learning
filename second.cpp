#include<iostream>
using namespace std;
bool check_even_odd(int num)
{
    if (num%2==0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    bool even_odd = check_even_odd(n);
    if (even_odd)
    {
        cout << n << " is an even number" << endl;
    }
    else
    {
        cout << n << " is a odd number" << endl;
    }
    return 0;
}
