/*1.4 select the average of numbers. 

Steps:
Read the total amount of numbers.
Read (n) numbers
nums=numbers
Calculate sum
sum = (n) +(n)
Calculate average.
avg= sum/numb 
Display average, the average of the total amount of numbers chosen.
*/
#include <stdio.h>
int main() 
        {
        	int $total_amount;
        /*, $numbers, $sum, $avg*/
printf ("Enter the total amount of numbers \n");
scanf ("%d", &$total_amount );

if ($total_amount >= 3)	{
printf("Number:   %d",$total_amount);

} 

else	{
	printf("can't compute with less than 3 numbers");
}
        }        /*
        How to currently get unstuck.
       
       I have to make $numbers into an array, that will containg $total_amount elements.       
       */
       
       /* This here is my local AI's approach:
       
       #include <stdio.h>

int main() {
    int total_amount;

    printf("Enter the total amount of numbers: \n");
    scanf("%d", &total_amount);

    if (total_amount >= 3) {
        int numbers[total_amount]; // Declare an array of size total_amount
        int sum = 0;

        printf("Enter %d numbers:\n", total_amount);
        for (int i = 0; i < total_amount; i++) {
            scanf("%d", &numbers[i]); // Input each number into the array
            sum += numbers[i]; // Calculate sum as you input numbers
        }

        double avg = (double)sum / total_amount; // Calculate average
        printf("Average: %.2f\n", avg);
    } else {
        printf("Can't compute with less than 3 numbers.\n");
    }

    return 0;
}

       */