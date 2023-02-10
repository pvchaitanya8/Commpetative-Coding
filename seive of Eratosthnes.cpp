//SEIVE OF ERATOSTHNES
#include<bits/stdc++.h>
using namespace std;

void seive_of_eratosthnes(int n){
  //Initiating vecotor with ture values of size range.
  vector<bool>primes(n,true);

  //Make 0 and 1 as false.
  primes[0]=primes[1]=false;

  //Then start with 2 until the range.
  for(int i=2;i<=n;i++){            
    //Now check if remaining are true or not.
    if(primes[i]==true){            
        //If true then run loop uptil n by incrementing j with i.
      for(int j=i*i;j<=n;j+=i){
        //Then make multiples of i as false. By starting from squares.
        primes[j]=false; 
      }
    }
  }
  int cnt=0;
  for(int i=2;i<=n;i++){
    if(primes[i]==true){
    //couting true values
      cnt+=1;
      cout<<i<<" ";
    }
  }
  cout<<"\n"<<cnt<<"\n";
}
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    seive_of_eratosthnes(n);
    }
  return 0;
}
