// greedy.c
// By Jake Goldstein
// Finished on 5/4/2015

#import <stdio.h>
#import <cs50.h> // used for the GetInt() function
#import <math.h> // used for the round() function

int main(void)
{
    float amount;
    do
    { 
        printf("How much change? (In dollars)");
        amount = GetFloat();
        if (amount <= 0) 
        {
            printf("Please enter a number larger than zero.\n");}
}
    while(amount < 0);

    float change = amount * 100;

    int rounded = roundf( change);

    int quarters = rounded / 25;
    int remaining = rounded % 25;

    int dimes = remaining / 10;
    remaining = remaining % 10;

    int nickels = remaining / 5;
    remaining = remaining % 5;

    int pennies = remaining / 1;

    int total = quarters + dimes + nickels + pennies;

    printf("%i\n", total);

}
