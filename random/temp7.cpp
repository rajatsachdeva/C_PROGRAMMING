#include <iostream>
using namespace std;

int main() {
	
	int i = 256;
	
	for(;;)
	   {
	       cout<<"Hello World\n";
	       
	       i = i<<1;
	       
	       if(i<0) {
                printf("\ni = %d", i);
	            break;

           }
	   }
	    
	return 0;
}
