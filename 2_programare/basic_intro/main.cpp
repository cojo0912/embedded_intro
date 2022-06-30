#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <math.h>

#define TEST 32131231


// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab02
// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab03
// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab04
// https://www.geeksforgeeks.org/scanf-and-fscanf-in-c/
// cpp.sh

//printf() cout
//scanf() cin

//pointer/adresa

int main()
{
    //exemple
    //int x,y;
    //float z;
    //scanf("%d/%d/%f", &x, &y, &z);  // cin>>x>>y>>z;  
    //printf("Numerele introduse de tine sunt: %d %d %f", x, y, z);
 
    int x;
    int y;
    //1
    //scanf("%d %d", &x, &y);
    //printf("%d", x+y); //cout<<x+y

    //2
    /*scanf("%d %d", &x, &y);
    if(x>y)
    {
        printf("%d", x);
    }
    else
    { 
        printf("%d", y);
    }*/

    //3
    //scanf("%d", &x);
    //printf("%d", (x%10)*2);

    //4 
    //scanf("%d %d", &x, &y);
    //printf("%f", (x+y)/2.0);

    //5
    //tema

    //6
    //scanf("%d", &x);
    //printf("%f", sqrt(x));

    //7
    /*scanf("%d", &x);
    float f1 = sqrt(x);
    int f2 = f1;
    if(f1 - f2 == 0)
        printf("PP");*/

    //8
    //tema

    //9
    //tema

    //10
    //tema

    //2.1
    /*scanf("%d", &x);
    //for(instr1-de unde se pleaca ; instr2 - cond de oprire ; incrementare)
    int i;
    for(i=1; i<=x; i++)
    {
        printf("%d ", i);
        if(i==5)
        {
            break;
        }

        if(i==3)
        {
            continue;
        }

        printf("%d\n", i*2);
    }*/

    //2.2
    //0 1 1 2 3 5
    /*scanf("%d", &x);
    int a = 0;
    int b = 1;
    int c;
    
    printf("%d %d ",a , b);
    for(int i = 2; i<x; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }*/

    //2.3
    /*scanf("%d", &x);
    int suma = 0;
    for(int i=1; i<=x; i++)
    {
        suma = suma + i;
    }
    printf("%d", suma);*/

    //2.4
    /*int n;
    scanf("%d", &n);
    int suma = 0;
    int  nr_citit;
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &nr_citit);
        suma = suma + nr_citit;
        printf("Suma provizorie: %d\n", suma);
    }
    printf("Suma finala: %d\n", suma);*/

    //2.5
    /*int n;
    scanf("%d", &n);
    while(n>=10)
    {
        n = n / 10;
    }
    printf("%d", n);*/

    //2.6
    //tema

    //2.6.2
    /*int suma = 0;
    int nr_citit;
    do
    {
        scanf("%d", &nr_citit);
        suma = suma + nr_citit;
    } while (nr_citit != 0);
    printf("Suma finala: %d\n", suma);*/

    //2.7,8,9,10,11,2 acasa


    getch();
    return 0;
}