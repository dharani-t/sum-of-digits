//# sum-of-digits
//sum of digits of given number using recursion 

#include <stdio.h> 
// Function to check sum of digit using recursion 
int sum_of_digit(int n) 
{ 
	if (n == 0) 
	return 0; 
	return (n % 10 + sum_of_digit(n / 10)); 
} 

 
int main() 
{ 
	int num = 9867; 
	int result = sum_of_digit(num); 
	printf("Sum of digits in %d is %d\n", num, result); 
	return 0; 
} 
