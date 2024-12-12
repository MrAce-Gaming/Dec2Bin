#include <stdio.h>

int dec2bin(int num, int array[32], int *size){
    int index = 0;
    while(num > 0){
    array[index++] = num % 2;
    num/=2;
    }

    for(int i = 0; i < index/2; i++){
        int temp = array[i];
        array[i] = array[index - i - 1];
        array[index - i - 1] = temp;
    }

    *size = index;
}

int main()
{
    int num;
    int size = 0;
    printf("Enter the decimal number: ");
    scanf("%d", &num);
    int array[32];
    dec2bin(num, array, &size);

    printf("The binary number is: ");
    
    for(int i = 0; i < size; i++)
    {
        printf("%d", array[i]);
    }
}