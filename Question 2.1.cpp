/*This program prompts input for 4 resistors in a circuit. 
One resistor is in series with 3 parallel resistors. The output gives
you the total resistance.*/
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
 // Declaring the variables that hold the values for the resistances entered by the user
 double R1, R2, R3, R4, R_TOT;

 //Prompts the user to enter a value for the first resistor
 cout << "Please enter the value of R1:";
 cin >> R1;
 //Prompts the user to enter a value for the second resistor
 cout << "Please enter the value of R2:";
 cin >> R2;
 //Prompts the user to enter a value for the third resistor
 cout << "Please enter the value of R3:";
 cin >> R3;
 //Prompts the user to enter a value for the fourth resistor
 cout << "Please enter the value of R4:";
 cin >> R4;
 
 //Calculates the total resistance for the circuit
 R_TOT = R1 + 1/((1/R2)+(1/R3)+(1/R4));

 //Sets the decimal point of the final resistance to 2 places
 cout.setf(ios::fixed);
 cout.precision(2);

 //Prints the final output and the total resistance
 cout << "The total resistance for this circuit is " << R_TOT << " ohms.\n\n\n";
 
 //Allows the output window to remain on the screen
 system("pause");

 //Terminates the program
 return 0;
}


