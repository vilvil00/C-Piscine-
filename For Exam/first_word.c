#include <unistd.h>

int main()
{
    int ac = 2;
    char *av[] = {"./a.out", "        vildan,sileyman   "};
    
    int i;
    i = 0;
    last
    if (ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
        {
            i++;
        }

        while(av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
        {
            write(1, &av[1][i], 1);
            i++;
        } 
    }
    write(1,"a", 1);
}