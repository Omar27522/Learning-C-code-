/*1st  exercise 1.4
find the Greatest Common Divisor 
using Euclid's formula.

1. User inputs int 2 numbers.

2. Find which of the two is larger.

3. Subtract the smallest from the largest.

4. The answer replaces the place of the  max number.

5. Repeat step 2, 3, 4 until answer is less or equal to zero. 

6. Display answer.

7. repeat until user exits the program

*/

#include <stdio.h>
int main()
{ int a,b,max,min;
//welcome  mesage
printf	("\nPlease enter 2 integers\n");
//ask the user for 2 numbers
scanf	("%d %d",&a,&b);
//find the larger and the smallest integer of the previously entered numbers
if (a>b)	{
		max=a;
		min=b;
		}
		
else	{
		max=b;
		min=a;
		}
		
printf	("The numbers you chose are: \n Max %d and Min %d\n",max,min);
// AI helped with the loop :( I need to get better
while (min > 0) {
        int answer = max - min;
        
        // Update max and min
        max = min;
        min = answer;
        
        // Ensure answer is always positive
        if (min < 0) {
            min = -min;
        }
    }
   // The GCD is the last non-zero minimum value
printf	("The GDC is %d \n",max);	
	
	return main();
	
}