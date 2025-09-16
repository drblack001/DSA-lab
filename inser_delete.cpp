#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout<<"enter the no of elements  ";
    cin>>n;
    int a[n];
    cout<<"enter the elements  ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //insertion

    int k;
    cout<<"enter the no to be entered  ";
    cin>>k;
    int pos;
    cout<<"at what position  "; 
    cin>>pos;
    n++;
    for (int i = n; i >pos ; i--)
    {
            a[i]=a[i-1];        
    }
    a[pos]=k;
    

    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }

    //deletion

    int k1;
    cout<<"enter the position you want to delete  ";
    cin>>k1;
    for (int i = k1; i<n; i++)
    {
            a[i]=a[i+1];
        
    }
    n=n-1;
    
    for (int i = 0; i <n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
}