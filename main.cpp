#include <iostream>
using namespace std; 

int main () {
	float a;
	float b;
	int c=0; 
	
        cin>> a;
	cin>> b; 
	cin>> c;
	
	if (c!=0 or c!=1 or c!=2) {
	cout<< "opzione non valida" <<endl;
}
    else{
	
	
	switch(c) {
	    case 0:
	        cout<<((b*a)/2)<<endl;
                break; 
	    case 1:
	    	cout<<(a*a)<<endl;
	    	break;
	    case 2:
	    	cout<<(a*b)<<endl;
	    	break;
	    	
	}
}
	return 0;
}
