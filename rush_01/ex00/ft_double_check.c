#include <stdio.h>

void    ft_double_check(int *tab, int *con, int size);

int main(void)
{
    //int tab[16] = {1, 2, 3, 4, 3, 4, 1, 2, 4, 1, 2, 3, 2, 3, 4, 1}; // good values
    //int tab[16] = {1, 3, 4, 2, 1, 4, 2, 3, 3, 4, 2, 1, 2, 4, 1, 3}; // bad values
    int tab[16] = {2, 4, 1, 3, 1, 3, 2, 4, 4, 1, 3, 2, 3, 2, 4, 1}; // arg!!!
    int con[16] = {2, 1, 4, 2, 2, 3, 1, 3, 2, 3, 1, 2, 2, 1, 3, 2}; // arg!!!

    //int con[16] = {3, 2, 2, 1, 2, 2, 1, 3, 4, 2, 1, 3, 1, 2, 2, 2}; // instructions
    int size = 4;
    
    ft_double_check(tab, con, size);
    //printf("\n result: %d\n", ft_double_check(tab, con, size));
    return (0);
}

int ft_up_loop(int *con, int size, int *ptr_z, int *ptr_t2t)
{
    //int tab2tab[size][size];
    int i = 0;
    int j = 0;
    int s = 0;
    int v = 1;
    while (i < size)
    {
        while (s < size - 1) // only 3 verifications
        {
            printf("\n t2t:  %d \n", ptr_t2t[i][j]);
            if (ptr_t2t[i][j] > ptr_t2t[i][s + 1])
                s++;
            else
            {
                if ((s - j) >= 1)
                {
                    j = s + 1;
                    s++;
                    v++;
                }
                else
                {
                    j++;
                    s++;
                    v++;
                }
            }
            printf("t2tj: %d, t2ts: %d, v: %d, ----- s: %d -- j: %d\n", ptr_t2t[i][j], ptr_t2t[i][s + 1], v, s, j);
        }
        printf("\n ptrz:  %d \n", *ptr_z);
        if (v == con[*ptr_z])
        {
            i++;
            *ptr_z += 1;
            s = 0;
            j = 0;
            v = 1;
            printf("\n ptrz:  %d \n", *ptr_z);
        }
        else
            return (0);
    }
    return (1);
}

int ft_down_loop(int *con, int size, int *ptr_z, int *ptr_t2t)
{
    //int tab2tab[size][size];
    int i = 0;
    int j = 3;
    int s = 3;
    int v = 1;
    while (i < size)
    {
        while (s > 0) // only 3 verifications
        {
            if (ptr_t2t[i][j] > ptr_t2t[i][s - 1])
                s--;
            else
            {
                if (j - (s - 1) >= 1)
                {
                    j = s - 1;
                    s--;
                    v++;
                }
                else
                {
                    j--;
                    s--;
                    v++;
                }
            }
        }
        if (v == con[*ptr_z])
        {
            i++;
            *ptr_z += 1;
            s = 3;
            j = 3;
            v = 1;
        }
        else
            return (0);
    }
    return (1);
}

int ft_left_loop(int *con, int size, int *ptr_z, int *ptr_t2t)
{
    //int tab2tab[size][size];
    int i = 0;
    int j = 0;
    int s = 0;
    int v = 1;
    while (j < size)
    {
        while (s < size - 1) // only 3 verifications
        {
            if (ptr_t2t[i][j] > ptr_t2t[s + 1][j])
                s++;
            else
            {
                if ((s - i) >= 1)
                {
                    i = s + 1;
                    s++;
                    v++;
                }
                else
                {
                    i++;
                    s++;
                    v++;
                }
            }
        }
        if (v == con[*ptr_z])
        {
            j++;
            *ptr_z += 1;
            s = 0;
            i = 0;
            v = 1;
        }
        else
            return (0);
    }
    return (1);
}

int ft_right_loop(int *con, int size, int *ptr_z, int *ptr_t2t)
{
    //int tab2tab[size][size];
    int i = 3;
    int j = 0;
    int s = 3;
    int v = 1;

    while (j < size)
    {
        while (s > 0) // only 3 verifications
        {
            if (ptr_t2t[i][j] > ptr_t2t[s - 1][j])
                s--;
            else
            {
                if (i - (s - 1) >= 1)
                {
                    i = s - 1;
                    s--;
                    v++;
                }
                else
                {
                    i--;
                    s--;
                    v++;
                }
            }
            //printf("t2tj: %d, t2ts: %d, v: %d, ----- s: %d -- j: %d\n", ptr_t2t[i][j], ptr_t2t[s - 1][j], v, s, j);
        }
        //printf("\n");
        if (v == con[*ptr_z])
        {
            j++;
            *ptr_z += 1;
            s = 3;
            i = 3;
            v = 1;
        }
        else
            return (0);
    }
    return (1);
}

void    ft_double_check(int *tab, int *con, int size)
{
    int tab2tab[size][size]; // create a 2 dimensions array
    int *ptr_t2t;
    int i; // index first dimension
    int j; // index second dimension
    int k; // index values to test
    int z; // index instructions given
    int *ptr_z;
    //int s; // index support!!
    //int v; // view value
    ptr_z = &z;
    
    ptr_t2t = tab2tab;

    i = 0;
    j = 0;
    k = 0;
    while (j < size)
    {
        while (i < size)
        {
            tab2tab[i][j] = tab[k];
            printf("%d ", tab2tab[i][j]);

            if (i == 3)
            {
                printf("\n");
            }
            i++;
            k++;
        }
        i = 0;
        j++;
    }
    printf("\n");
    
    z = 0;
    
    /*************************************/
    /*       up       */
    
    ft_up_loop(con, size, &z, *tab2tab);
    printf("z: %d\n", *ptr_z);
    /*************************************/
    /*      down      */
    
    ft_down_loop(con, size, &z, *tab2tab);
    printf("z: %d\n", *ptr_z);
    /****************************************/
    /*       left       */
    
    ft_left_loop(con, size, &z, *tab2tab);
    printf("z: %d\n", *ptr_z);
    /*******************************************/
    /*       right       */
    
    ft_right_loop(con, size, &z, *tab2tab);
    printf("z: %d\n", *ptr_z);
}
