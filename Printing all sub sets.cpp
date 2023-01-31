/*
Used Concepts like:
    1. Bit Magic
    (becuase the pattren of binary of the number is same as element presence in a subset)
	Image source: https://drive.google.com/file/d/1N0R7c0TmhEw1iiT1IIPGNxbqAj0Do3nk/view?usp=share_link
		- 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];.
    
   //taking array as input
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
  
    //Printing an array
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n________________\n";
	
	//iterating upto (2 power n) 
    for(int i=0; i< (1<<n); i++){
		//iterating through every bit in the binary repsentation of a number 
        for(int j=0; j<n; j++){
			//accepting element if the bit is '1'
            if(i &(1<<j)) cout<<a[j]<<" ";
        }
        cout<<"\n";
    }

}
