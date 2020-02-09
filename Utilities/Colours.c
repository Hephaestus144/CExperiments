/*
 *
 * Colours - The usual litany of ANSI colours.
 *
 */

#include "Colours.h"

void red()
{
    printf("\033[1;31m");
}

void red_bold()
{
    printf("\033[1;31m");
}

void green()
{
    printf("\033[0;32m");
}

void green_bold()
{
    printf("\033[1;32m");
}

void yellow()
{
    printf("\033[0;33m");
}

void yellow_bold()
{
    printf("\033[01;33m");
}

void blue()
{
    printf("\033[0;34m");
}

void blue_bold()
{
    printf("\033[1;34m");
}

void magenta()
{
    printf("\033[0;35m");
}

void magenta_bold()
{
    printf("\033[1;35m");
}

void cyan()
{
    printf("\033[0;36m");
}

void cyan_bold()
{
    printf("\033[1;36m");
}

void colours_reset()
{
    printf("\033[0m");
}
