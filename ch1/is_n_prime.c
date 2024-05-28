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