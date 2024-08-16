#include <iostream>
#include <math.h>
using namespace std;

int main()
 {
 	//define variables
 	string operation;
 	double number1,number2;
 	
 	//get user input
 	cout<<"Enter first number:";
 	cin>>number1;
 	cout<<"Enter operation(+,-,*,/):";
 	cin>>operation;
 	cout<<"Enter second number:";
 	cin>>number2;
 	
 	//if else statement checking entered operation
 	if (operation=="+")
	 {
	  cout<< number1 + number2;
	 }
	else if (operation=="-")
	 {
      cout<< number1 - number2;
	 }
	else if (operation=="*")
	 {
	  cout<< number1 * number2;
	 }	
	else if (operation=="/")
	 {
	  cout<< number1 / number2;
	 }
	else 
	 {
	  cout<<"not a recognize operation!";
	 }
	return 0;
}
