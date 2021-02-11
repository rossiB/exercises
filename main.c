#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Made a simple guessing game to experiment with custom functions. As well as sending, and receiving a value through functions.

int verify(int guess);      // verify that input is within range 1-50. Hopefully return tested value back to main().
int check(int check, int hmm);

int main()
{
    int temp,count,target;

    printf("Try to guess the secret number (1-50): ");
    scanf("%d",&count);
    temp = verify(count);

    srand((unsigned)time(NULL));  //generating a random number the user will attempt to guess
    target = rand()%50+1;

    check(temp,target);
    return(0);
}

int verify(int guess)   // makes sure user inputs a value ranging from 1-50, and returns value when in parameter
{
    int t;

    while(guess < 1 || 50 < guess)
    {
        scanf("%d",&guess);
    }
    t = guess;          // I think the value must be stored in another variable to send it back to main. IDK tho
    return(t);
}

int check(int check, int hmm) // this is a simple check to see if the 'target' was guessed by the user.
{
    if(check == hmm)
    {
        printf("You guessed %d the secret number!\n",check);
    }
    else printf("Sorry, the secret number was %d\n",hmm);

}

