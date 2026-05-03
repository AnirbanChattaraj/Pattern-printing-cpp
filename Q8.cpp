//*****
 //****
 // ***
  // **
  //  *
  #include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter your rows:";
    cin>>n;
    cout<<"Enter your columns:";
    cin>>m;
    int nsp=0;
    int nst=n;
    for (int i = 1; i <= n; i++)
    {
       for (int j = 1; j <=nsp; j++)
       {
        cout<<" ";
       }
       for (int k = 1; k <= nst; k++)
       {
        cout<<"*";
       }
       cout<<endl;
       nsp++;
       nst--;
    }
    
}