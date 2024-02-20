
#include <stdlib.h>

int ft_strlen(int *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return (i);
}

int *ft_range(int start,int end)
{
    int i;
    int *result;

    if (start > end)
    {
        return(0);
    }
    
    i = end - start;
    
    result = (int *)malloc(sizeof(int) * (i));
    if (result == NULL)
    {
        return (NULL);
    }
    i = 0;
    while (end >= start)
    {
        result[i] = start;
        start++;
        i++;
    }
    return (result);
}

#include <stdio.h>
int main()
{
    int *d;
    int i = 0;
    int min = 3;
    int max = 9;
    int size = max - min;

    d = ft_range(min,max);
    while( i <= size)
    {
        printf("%d",d[i]); 
        i++;
    }
    
}