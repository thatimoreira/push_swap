#include "push_swap.h"
// create function read_input ()
// that splits the argument and converts (use atoi) each nbr into integers

// validate_input()
// checks if args are all int, bigger than INT_MAX or smaller than INT_MIN
// checks if args are duplicated
// in the above cases display "Error"
// if not, initialize the stacks a and b

// stack_init()
// init stacks a and b
// store each nbr in stack a
int main(int argc, char **argv)
{
    if (argc == 1 || (argc == 2 && !argv[1][0]))
        return (-1);
    else if (argc == 2)
        read_input(argv[1]); //add params
    return (0);
}