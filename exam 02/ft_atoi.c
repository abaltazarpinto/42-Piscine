
/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);


HELP 
1-  Handle the white spaces
2- Handle the sign
3- Handle the conversion
*/

// Only used for testing
#include <stdio.h>
#include <stdlib.h>

int ft_atoi(const char *str)
{
    int res;
    int sign;

    res = 0;
    sign = 1;

    while( *str == 32 || (*str >= 9  && *str <= 13))
        str++,
    // only take car of the sign for negative number cuz we dont use them for the positive numbers 
    if(*str == '-')
        sign += -1;
    // step_00 now handling skipping beyond the sign 
    if(*str == '-' || *str == '+')
        str++;
    //step_01 dealing with the actual conversion
    while(*str >= '0' && *str <= '9')
    {
// if our current resul is 10, when you multriplicate by 10 serving as placeholder for the other part of the equation *str -'0'
        res = res *10 + *str - '0'; 
        str++;
    }
    return(res * sign)
    /* Longuer way to do the step_00
    if(*str == '-' || +str == '+')
    {
        if(*str == '-')
            sign += -1;
        str++;
    }*/
// we need two variables 
// One to store our ongoing result and a variable to take care of the sign 
}


// DO NOT INCLUDE IN SUBMISSION
int main(int ac, char **av)
{
    int mine;
    int theirs;

    if(ac == 2)
    {
        mine = ft_atoi(av[1]);
        theirs = atoi(av[2]);

        printf("mine %d | theirs : %d\n", mine, theirs)
    }
    return(0);
}
