#include <stdio.h>

int main() {
    int i, j;
    
    printf("\n\nAlphabets A to Z in Star Pattern\n");
    printf("======================================\n\n");
    
    // Print A
    printf("A:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print B
    printf("B:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1) {
                printf("* ");
            }
            else if((i == 1 || i == 3 || i == 5) && j < 5) {
                printf("* ");
            }
            else if(j == 5 && i != 1 && i != 3 && i != 5) {
                printf("* ");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");   
    }
    printf("\n");
    
    // Print C
    printf("C:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print D
    printf("D:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print E
    printf("E:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || i == 5 || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print F
    printf("F:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || j == 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print G
    printf("G:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1 || (j == 5 && i >= 3) || (i == 3 && j >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print H
    printf("H:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print I
    printf("I:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print J
    printf("J:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || j == 3 || (i == 5 && j <= 3) || (i == 4 && j == 1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print K
    printf("K:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || (i + j == 6 && i <= 3) || (i == j && i >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print L
    printf("L:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || i == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print M
    printf("M:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || (i == j && i <= 3) || (i + j == 6 && i <= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print N
    printf("N:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print O
    printf("O:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || j == 1 || j == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print P
    printf("P:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || j == 1 || (j == 5 && i <= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print Q
    printf("Q:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if((i == 1 && j >= 2 && j <= 4) || (i == 5 && j >= 2 && j <= 4) || 
               (j == 1 && i >= 2 && i <= 4) || (j == 5 && i >= 2 && i <= 4) || 
               (i == j && i >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print R
    printf("R:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || j == 1 || (j == 5 && i <= 3) || (i == j && i >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print S
    printf("S:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 3 || i == 5 || (j == 1 && i <= 3) || (j == 5 && i >= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print T
    printf("T:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || j == 3)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print U
    printf("U:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || i == 5)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print V
    printf("V:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if((j == 1 && i <= 3) || (j == 5 && i <= 3) || (i == 4 && (j == 2 || j == 4)) || (i == 5 && j == 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print W
    printf("W:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(j == 1 || j == 5 || (i == 4 && (j == 2 || j == 4)) || (i == 3 && j == 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print X
    printf("X:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == j || i + j == 6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print Y
    printf("Y:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if((j == 3 && i >= 3) || (i == j && i <= 3) || (i + j == 6 && i <= 3))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    
    // Print Z
    printf("Z:\n");
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            if(i == 1 || i == 5 || i + j == 6)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}