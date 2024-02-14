#include <stdio.h>

int main(int ac, char **av)
{

    int i;
    int j;
    int flag;
    int count;

    flag =1;
    i = 1;
    j = 0;
    count = 0;
    while(i < ac)
    {
        j = 0;
        while(av[i][j])
        {
            if((av[i][j] >= 97 && av[i][j] <= 122) || (av[i][j] >= 65 && av[i][j] <= 90) && flag == 1)
            {
                count++;
                flag = 0;
            }
            else
                flag = 1;
            j++;
        }
        i++;
    }
    printf("count: %d", count);
} 
