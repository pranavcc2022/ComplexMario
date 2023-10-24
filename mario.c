#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    /// To check if input is in between 1 and 9
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    /// To Print Rows
    for (int i = 0; i < n; i++)
    {
        /// Empty spaces(Coloumns)
        for (int j = i; j < n - 1; j++)
        {
            printf(" ");
        }
        /// To Print Value(Coloumns)
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        /// Gap between Pyramids
        printf("  ");

        /// To Print value at the right side(Coloumns)
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        /// To print in new line
        printf("\n");
    }
}