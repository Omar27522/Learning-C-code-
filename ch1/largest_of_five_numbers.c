/* Chapter 1.4 |¦|  book example ¬pg.31
	Find the largest of a sequence of five integers
	
	different methods for solving this problem are available
	1.	Read all numbers, look through them to find the largest one
	2.	Read them one at a time and continually keep track of the largest one so far.	
*/
//Second Solution Design
/*
	Read in the first number.
	
	Let the maximum be the first number.
	
	Read in the second number.
	
	If the second number is larger than maximum,		replace maximum with the second number.
	
	Read in the third number.
	
	If the third number is larger than maximum, 				replace maximum with the third number.
	
	Read in the fourth number.
	
	If the fourth number is larger than maximum, 			replace maximum with the fourth number.

	Read in the fifth number.
	
	If the fifth number is larger than maximum, 			replace it with the fifth number.
	
	Display maximum, the largest of five numbers.
*/
/*
–We need some variable that will simply count to five to tell us when we are to stop looping. We need another variable to hold the current number beign tested, and a third variable tos hold the largest number found so far. 

1.	Initialize the value of the variable Index with zero.
2.	Read the first number into Number
3.	Let Maximum = Number.
4.	Increase the value of Index by 1.
5.	Read the next number into Number.
6.	If the value of number is larger than 				
		Maximum, replace Maximum with Number.
7. 	If the value of Index is 4, go to the next line, else go back to step 4.
8.	Display the value of the variable Maximum.
*/
#include<stdio.h>

int main() {
  int
  index, number, maximum;

  index = 0;
  printf("Please enter number: ");
  scanf("%d", & number);
  maximum = number;
  while (index < 4) {
    index = index + 1;
    printf("Please enter number: ");
    scanf("%d", & number);
    if (number > maximum)
      maximum = number;
  }
  printf("The maximim of the values entered is %d\n", maximum);
}