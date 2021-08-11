#include <stdio.h>
//does not work
void swap(float, float);

int main()
{
		float num1, num2;

	printf("Please enter 2 numbers: ");
	scanf("%f%f", &num1, &num2);

	if (num1 > num2)
	  swap(num1, num2);//swap(&num1,&num2)  but doesnt allow the &
	printf("The numbers in order are %5.1f %5.1f\n", num1, num2);
}

void swap(float num1, float num2)
{
	float temp;

	temp = num1;
	num1 = num2;
	num2 = temp;
}

