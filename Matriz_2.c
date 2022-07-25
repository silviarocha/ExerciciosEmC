#include <stdio.h>
#define DIMENCAO 5
#define ESPACO 32
#define MARCADO '*'

int main()
{
    int mat [DIMENCAO][DIMENCAO] =  {{1, 2, 3},
                                    {-3, -2, -1},
                                    {4, 5, 6}};
    
    int x, y;
    int produtorio;
    
    produtorio = 1;
    
    for(x = 0; x < DIMENCAO; x++)
        for(y = 0; y < DIMENCAO; y++)
        if(x == y)
        produtorio * mat
    
    return 0;
}

