#include <stdio.h>

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    write(1,"s\n", 2);
    return (0);
}