#include<iostream>
using namespace std ; 
int reverse(int arrA[] , int n ){
	for(int i = 0 ; i < n /2 ; i ++){
		swap(arrA[i]  , arrA[n-i-1]) ; 
	}
}
void show_array(int arrA[]  , int n){
	for(int i = 0 ; i < n ; i ++){
		cout<<arrA[i]<<" " ;  
	}
}
int main(){
	int n ; cin >> n ; 
	int arrA[1000]  ; 
	for(int i = 0 ; i < n; i ++){
		cin >> arrA[i] ;
	}
	reverse(arrA , n) ; 
	show_array(arrA , n ) ; 
}
