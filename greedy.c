#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //Initialize variables
    float owedAmount;
    int coins = 0;
    float quarter = 25;
    float dime = 10;
    float nickel = 05;
    float penny = 01;
    
    //Requires positive float input from user and assigns to owedAmount
    do
    {
        printf("O hai! How much change is owed?: \n");
        owedAmount = get_float();
    }
    while(owedAmount < 0);
    
    //converts dollar amount into cents and rounds float properly
    owedAmount = owedAmount * 1000;
    owedAmount = owedAmount / 10;
    
    //checks if owedAmount can be reduced by a quarter; if so, increments coins and reduces owedAmount by quarter
    while(owedAmount >= quarter)
    {
        coins++;
        owedAmount = owedAmount - quarter;
    }
    
    //checks if owedAmount can be reduced by a dime; if so, increments coins and reduces owedAmount by dime
    while(owedAmount >= dime)
    {
        coins++;
        owedAmount = owedAmount - dime;
    }
    
    //checks if owedAmount can be reduced by a nickel; if so, increments coins and reduces owedAmount by nickel
    while(owedAmount >= nickel)
    {
        coins++;
        owedAmount = owedAmount - nickel;
    }
    
    //checks if owedAmount can be reduced by a penny; if so, increments coins and reduces owedAmount by penny
    while(owedAmount >= penny)
    {
        coins++;
        owedAmount = owedAmount - penny;
    }
    
    //returns coins
    printf("%i\n", coins);
}