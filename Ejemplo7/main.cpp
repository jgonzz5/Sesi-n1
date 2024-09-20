#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{	
	char c;
	bool test;
	
	cout << "Pulsa teclas numericas. Acabe pulsando ESC\n";
	
	do{
		c = getchar();
		test = ((c >= '0') && (c <= '9'));
		
		if(test)
			cout << " pulsando.\n";
	} while(c != 27);
	
	return 0;
}
