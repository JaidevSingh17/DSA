#include <stdio.h>

int main() 
{
    int n, i;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int smallest = numbers[0];
    
    for (i = 1; i < n; i++) 
    {
        if (numbers[i] < smallest) 
        {
            smallest = numbers[i];
        }
    }

    printf("The smallest number is: %d\n", smallest);
    
    return 0;
}