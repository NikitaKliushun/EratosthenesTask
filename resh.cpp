#include <vcl.h>
#include <math.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#pragma hdrstop
#pragma argsused
void main ()
{
        int n,i,j,a[100000] = {0};
        char s[81];
        Main:
        Check1:
             printf("Input N (1 < N < 100000): "); scanf("%s",&s);
        n = atoi(s);
        if (n >= 100000 || n < 2) {printf("\nIncorrect value! Try again...\n\n"); goto Check1;}
        a[1] = 1; i = 1;
        while (i <= sqrt(n)) {
               while (a[i] == 1) i++;
               j = i * 2;
               while (j <= n) {
                     a[j] = 1;
                     j += i;
               }
               i++;
        }
        printf("Answer: \n");
        for (i = 1; i < n; i++)
             if (a[i] == 0) printf("%d ",i);
        Check2:
        printf("\nMore? (y / n)\n"); scanf("%s",&s);
        if (s[0] == 'y') goto Main;
        else if (s[0] == 'n') return;
             else {printf("\nIncorrect value! Try again...\n\n"); goto Check2;}
}
