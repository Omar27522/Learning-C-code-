/* 1.4.2 A positive integer is prime if its only divisors are one and itself.
One method of determining whether a given positive integer is prime is to successively divide it by numbers smaller than itself to see whether any of these divide it evenly.
Using Polya's problem-solving methodology. design an algorithm for the solution to this problem.
Your algorithm should be presented in pseudocode.*/

/* My approach 😮‍💨
#include <stdio.h>
main () {
	int numb;
	scanf("%d", &numb);
	for (i=2, i<numb, i++){		
	if {
		numb%i=0;
	printf("%d! is prime \n",numb);
	}
	else {
		printf("%d! is NOT prime\n",numb);
		}
	}
}

    ----AI fixes my code----
        
                               */
    
#include <stdio.h>
int main() {
    int numb;
    printf("Enter a number: ");
    scanf("%d", &numb);
    
    if (numb <= 1) {
        printf("%d! is NOT prime\n", numb);
        return 0;
    }
    
    int is_prime = 1; // Assume the number is prime
    for (int i = 2; i < numb; i++) {
        if (numb % i == 0) {
            is_prime = 0; // Found a divisor, number is not prime
            break; // No need to continue checking
        }
    }
    
    if (is_prime) {
        printf("%d! is prime\n", numb);
    } else {
        printf("%d! is NOT prime\n", numb);
    } 
    return 0;
}

/*
Psedudocode

is_prime (n)

if n is <= 1 !prime

loop i=2, i<n, i++

if n%i==0
is prime

else NOT prime
*/

/* 1.4.2
                         Find the Primes. 

A positive integer is prime if its only divisors are one and itself. One method of determining whether a given positive integer is prime is to
successively divide it by numbers smaller than itself to see whether any
of these divide it evenly. Using Polya's problem-solving methodology,
design an algorithm for the solution to this problem. Your algorithm
should be presented in pseudocode.


               {understaning the problem}
1. Find if a number is a prime.
A prime number can only be divided by 1 and itself

Method: is possitive integer Prime?

divide it by numbers smaller than itself to see whether to see it any of these divide it

							[Pseudocode]
1. Read an intiger. ¬ int number

2. Divide int by number - 1.

3. If the answer has a remainder of zero
	Number is not prime.

4. repeat step 2 until number s divided by 2.

5. Repeat step 3. Stop program if Number is not  	Prime

6. if Progran continues until Number is divided by 	One. ==> Number is Prime.

						<AI improvemnet>
						
Your pseudocode is on the right track, but it can be improved for clarity and accuracy.

Here's a revised version:

1. Read an integer n.

2. If n <= 1
    Print "Number is not prime."
    Exit

3. For i from 2 to n - 1
    If n mod i == 0
        Print "Number is not prime."
        Exit

4. Print "Number is prime."

Explanation:

1. Read an integer n: This step ensures we have a number to check.

2. If n <= 1: Prime numbers are greater than 1. If the number is 1 or less, it’s not prime.

3. For i from 2 to n - 1: We loop through numbers from 2 to n - 1.

		If n mod i == 0: If any number between 2 and n - 1 divides n without a remainder, n is not prime.
		
		Print "Number is not prime.": If a divisor is found, the number is not prime, and we print the result and exit.
		
4. Print "Number is prime.": If no divisors are found, the number is prime, and we print the result.

This version of pseudocode follows a clear logical sequence and ensures that the program terminates early if a divisor is found, which is more efficient.
*/