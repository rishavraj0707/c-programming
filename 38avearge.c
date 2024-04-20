// average using function

#include <stdio.h>
float average(int, int, int);

int main() 
{
    int num1, num2, num3;
    float avg;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    avg = average(num1, num2, num3);
    
    printf("Average of %d, %d and %d is: %f", num1, num2, num3, avg);    
    return 0;
}
float average(int x, int y, int z){
	
	float avg;
	avg = (x + y + z)/3.0;
	
	return avg;
}