#include <stdio.h>

int findDigit(int bin_val)
{

    // int unit_digit;
    int i = 0;
    while (bin_val != 0)
    {
        bin_val = bin_val / 10;
        i++;
    }
    return i;
}

int convertedValue(int digits,int binaryValue)
{
    int i=0;
    int sum=0;
    while(binaryValue!=0)
    {
        int unit=binaryValue%10;
        

    }
}
int main()
{
    int binary_val;
    printf("Enter any Binary Number : ");
    scanf("%d", &binary_val);
    printf("Number of digits is : %d ", findDigit(binary_val));




    // int i = 0;
    // do
    // {
    //     binary_val = binary_val / 10;
    //     i++;
    // } while (binary_val != 0);
    // printf("%d", i);

    return 0;
}