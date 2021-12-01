#include <unistd.h>
#include <stdio.h>

/*
    tab -> array of values to test
    con -> array of instructions given
    size -> rows or columns size
*/
int ft_double_check(int *tab, int *con, int size);

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

int ft_double_check(int *tab, int *con, int size)
{
    int tab2tab[size][size]; // create a 2 dimensions array
    int i; // index first dimension
    int j; // index second dimension
    int k; // index values to test
    int z; // index instructions given
    int s; // index support!!
    int v; // view value

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
    
    i = 0;
    j = 0;
    s = 0;
    v = 1;
    while (i < size)
    {
        while (s < size - 1) // only 3 verification
        {
            if (tab2tab[i][j] > tab2tab[i][s + 1])
            {
                s++;
            }
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
            //printf("t2tj: %d, t2ts: %d, v: %d, ----- s: %d -- j: %d\n", tab2tab[i][j], tab2tab[i][s + 1], v, s, j);
        }
        //printf("\n");
        if (v == con[z])
        {
            i++;
            z++;
            s = 0;
            j = 0;
            v = 1;
        }
        else
        {
            return (0);
        }
    }
    
    /*************************************/
    /*      down      */
    
    i = 0;
    j = 3;
    s = 3;
    v = 1;
    while (i < size)
    {
        while (s > 0) // only 3 verification // ou * par - 1 // size - 1
        {
            if (tab2tab[i][j] > tab2tab[i][s - 1]) // s + 1
            {
                s--; // s++;
            }
            else
            {
                //printf("s: %d --- j: %d\n", s, j);
                if (j - (s - 1) >= 1) // s - j
                {
                    j = s - 1; // s + 1
                    s--; // s++;
                    //printf("s: %d\n", s);
                    v++;
                }
                else
                {
                    j--; // j++
                    s--; // s++
                    v++;
                }
            }
            //printf("t2tj: %d, t2ts: %d, v: %d, ----- s: %d -- j: %d\n", tab2tab[i][j], tab2tab[i][s - 1], v, s, j);
        }
        printf("\n");
        if (v == con[z])
        {
            i++;
            z++;
            s = 3; // 0
            j = 3; // 0
            v = 1;
        }
        else
        {
            return (0);
        }
    }
    
    /****************************************/
    /*       left       */
    
    i = 0;
    j = 0;
    s = 0;
    v = 1;
    while (j < size)
    {
        while (s < size - 1) // only 3 verification
        {
            if (tab2tab[i][j] > tab2tab[s + 1][j])
            {
                s++;
            }
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
            //printf("t2tj: %d, t2ts: %d, v: %d, ----- s: %d -- j: %d\n", tab2tab[i][j], tab2tab[s + 1][j], v, s, j);
        }
        //printf("\n");
        if (v == con[z])
        {
            j++;
            z++;
            s = 0;
            i = 0;
            v = 1;
        }
        else
        {
            return (0);
        }
    }
    
    /*******************************************/
    /*       right       */
    
    i = 3;
    j = 0;
    s = 3;
    v = 1;
    while (j < size)
    {
        while (s > 0) // only 3 verification // ou * par - 1 // size - 1
        {
            if (tab2tab[i][j] > tab2tab[s - 1][j]) // s + 1
            {
                s--; // s++;
            }
            else
            {
                //printf("s: %d --- j: %d\n", s, j);
                if (i - (s - 1) >= 1) // s - j
                {
                    i = s - 1; // s + 1
                    s--; // s++;
                    //printf("s: %d\n", s);
                    v++;
                }
                else
                {
                    i--; // j++
                    s--; // s++
                    v++;
                }
            }
            printf("t2tj: %d, t2ts: %d, v: %d, ----- s: %d -- j: %d\n", tab2tab[i][j], tab2tab[s - 1][j], v, s, j);
        }
        printf("\n");
        if (v == con[z])
        {
            j++;
            z++;
            s = 3; // 0
            i = 3; // 0
            v = 1;
        }
        else
        {
            return (0);
        }
    }
    
    return (1);
}
