#include<iostream>
using namespace std;

int x = 10;

int main()
{
    int x = 20;

    cout<<"Local variable " << x << endl;
    cout<<"Global variable " << ::x << endl;
}