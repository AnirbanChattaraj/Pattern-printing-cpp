//*
//* *
//* * *
//* * * *
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter your rows:";
    cin>>n;
    cout<<"Enter your columns:";
    cin>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}