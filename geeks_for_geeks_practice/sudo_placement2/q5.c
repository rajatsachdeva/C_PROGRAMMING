#include <stdio.h>

void main() {
	
	char symbol = 'W';
	
	switch(symbol)
        {
            case 'W' : printf("White ");
            case 'B' : printf("Black ");
            case 'R' : printf("Red ");
            default  : printf("Error"); break;
        }
} 
