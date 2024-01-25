#include<iostream>
using namespace std ; 
bool check(int arrA[] , int n){
	for(int i = 0 ; i < n/2 ; i ++){
		if(arrA[i]  == arrA[n - i - 1]){
			return true ;
		}else{
			return false ; 
		}
		}
	}
int main(){
	int n ; cin >> n ; 
	int arrA[1000] ;
	for(int i = 0 ; i < n ; i ++){
		cin >> arrA[i] ; 
	}
	cout<< check(arrA , n ) ; 
	return 0 ; 
}
