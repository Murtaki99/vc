#include <iostream>
#include <conio.h>
using namespace std;


int main(){
	int a,b,i;
	a=-1;
	cout <<"bilangan ganjil(1-100) adalah: "<<endl;
	
	for(i=1;i<=50;i++)
	{
		b=2+a;
		cout<<b<<" ";
		a=b;
		
	}
	
	getch();
}
