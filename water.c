#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: \n");
    
    int minutes = get_int();
    int bottles = minutes * 12;
    
        while(minutes <= 0)
    {
        printf("Enter a valid positive integer: \n");
        minutes = get_int();
        
        if(minutes > 0)
        {
            break;
        }
    }
    
    printf("Bottles = %i\n", bottles);
}