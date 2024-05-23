/*chapter 1.4 
Select the Average of Whole Numbers. 

Steps:

1. Read (n) numbers

2. Calculate sum of (n)numbers

3. Calculate average.
avg = sum/numbers

4. Display average, the average of the total amount of numbers chosen.
*/
#include <stdio.h>
int main() 
        {
        	int $total_amount;
printf ("Enter the total amount of numbers \n you wish to calculate the average of \n");
scanf ("%d", &$total_amount );

if ($total_amount >= 3)	{
	int $numbers[$total_amount];
	int $sum=0;
printf("Enter %d numbers.\n Press enter after each number \n",$total_amount);
	for (int i = 0; i < $total_amount; i++) {
            scanf("%d", &$numbers[i]); 
            $sum += $numbers[i];
	}
int $avg = $sum/$total_amount;
printf ("The Average number from %d entered numbers is %d.",$total_amount,$avg);
} 

else	{
	printf("can't compute with less than 3 numbers");
}
        } 