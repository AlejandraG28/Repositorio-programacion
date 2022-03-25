#include <iostream> 
using namespace std;
main()
{ 

int X;
int V;
int N;

X=1;
 cout<<"programa para ver las tablas de multiplicar";
    for(X; X<=10 ;X++)
    { 
          N=1;
          for(N;N<=10;N++)
          {
          	V=X*N;
          	cout << X << "*" <<N<< "=" <<V;
          	cout<<endl;
		  }
	 }
}


