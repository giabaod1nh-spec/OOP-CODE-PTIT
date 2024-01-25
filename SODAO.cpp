#include<iostream>
using namespace std  ; 
 int sodao(int n ){
 	int temp = 0  ; 
 	int remainder ; 
 	while( n > 0 ){
 		remainder = n % 10 ;
		 temp = temp * 10 + remainder ; 
 		n/= 10 ; 
	 }
	return temp ; 
 }
 int main(){
 	int n ; 
 	cin >> n ; 
 	cout<<sodao(n) ; 
 }
