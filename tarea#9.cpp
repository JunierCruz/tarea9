#include<stdio.h>
#include<iostream>
using namespace std;

int main (){
	
	
	int n, x=0;
	cout<<"Introduzca el numero: "; 
		cin>>n;
		
	while( n > 0)  {
		n = n / 10;
		x++;
	}
	
	cout<<"El numero tiene: "<<x<<" cifras "<<endl;
	
	
	
	
	
	
	
	
	
	return 0;
}
