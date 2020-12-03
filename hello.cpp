#include<iostream>
#include<conio.h>
using namespace std;
void display(string name)
{
    cout << name << ", Welcome to Github" << endl;
}
int main()
{
    string name;
    cout << "Hello Github" << endl;
    name = "Rakib Hasan";
    display(name);
    getch();
}