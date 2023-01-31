#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    #taking array as input
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
  
    #Printing an array
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n________________\n";

    for(int i=0; i< (1<<n); i++){
        for(int j=0; j<n; j++){
            if(i &(1<<j)) cout<<a[j]<<" ";
        }
        cout<<"\n";
    }

}
