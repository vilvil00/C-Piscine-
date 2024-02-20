#include <unistd.h>
int ft_strlen(char *str)
{
    int i;
    i = 0;
    
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main()
{
    int ac = 2;
    char *av[] = {"./a.out", "   vildan,sileyman"};
    
   int i;
   
   i = ft_strlen(av[1]);
   
   while(av[1][i] == ' ' || av[1][i] == '\t')
   {
       i--;
   }
   
   while( av[1][i] != ' ' && av[1][i] != '\t' && i != 0)
   {
       i--;
   }
    while(av[1][i] != '\0' && av[1][i] != ' ' && av[1][i] != '\t')
    {
        write(1, &av[1][i], 1);
        i++;
    } 
   
   
   
}
