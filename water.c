#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Minutes: \n");
    
    int minutes = get_int();
    int bottles = minutes * 12;
    
    do
    {
        printf("Enter a valid positive integer: \n");
        minutes = get_int();
        if(minutes > 0)
        {
            bottles = minutes * 12;
            break;
        }
    }
    while(minutes <= 0);

    printf("Bottles = %i\n", bottles);
}