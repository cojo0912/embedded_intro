#include <stdio.h>
#include <iostream>
#include <math.h>



// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab04 - functii
// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab05 - vectori
// https://ocw.cs.pub.ro/courses/programare/laboratoare/lab06 - matrici
// cpp.sh

//1 fucntii
/*tip_returnat nume_functie(tip_param param1, tip_param param2, ....)
{
    //corpul functiei
    //return valoare de acelasi cu tip_returnat
}*/

int calc_minim(int x , int y)
{
    if(x<y)
        return x;
    else
        return y;
}

int calc_minim_diferit(int x , int y)
{
    //x=a;
    //y=b;

    if(x<y)
        return x;
    else
        return y;
}

void functie_care_nu_ret_nimic(int a)
{
    printf("%d\n", a);
    return;
    printf("%d\n", a*2);
}

void functie_1(int* x)
{
    (*x) = 5;
}

int probl_3_2(int x)
{
    int i;
    for(i=x-1; i>=1; i--)
        if(x%i==0)
            return i; 
}

void probl_3_3(int x, int* rezultat)
{
    int i;
    for(i=x-1; i>=1; i--)
        if(x%i==0)
        {
            (*rezultat) = i;
            return;
        }
}

int probl_3_4(int nr)
{
    int suma = 0;
    while(nr>0)
    {
        suma = suma + (nr%10);
        nr = nr / 10;
    }
    return suma;
}

//tema de casa 3_5

int ptobl_vect(int* x)
{
    x[2] = 22; //corect
}

int main()
{
    //functii
    //int a, b;
    //scanf("%d %d", &a, &b);
    //printf("%d %d",calc_minim_diferit(a,b), a);

    //a = 1;
    //functie_1(&a);
    //printf("%d", a);
    
    //printf("%d\n",probl_3_2(12));

    //int rez=0;
    //probl_3_3(567 , &rez);

    //vectori
    //int n;
    //int v[10];
    
    //citesc n nr_1, nr_2 ... nr_n
    //scanf("%d", &n);
    //for(int i = 0; i<n; i++)
    //    scanf("%d", &v[i]);
    
    // probl 1 vector
    /*int contor = 0;
    for(int i = 0; i<n; i++)
        if(v[i]%2 == 1)
        {
            printf("%d ", v[i]);
            contor ++;
        }
    printf("\n%d ", contor);*/

    //probl 2
    /*for(int i=1; i<n; i = i+2)
    {
        printf("%d ", v[i]);
    }*/

    /*int min, max;
    int min_i, max_i;

    min = v[0];
    min_i = 0;
    max = v[0];
    max_i = 0;

    for(int i=0; i<n; i++)
    {
        if(v[i]<min)
        {
            min = v[i];
            min_i = i;
        }

        if(v[i]>max)
        {
            max = v[i];
            max_i = i;
        }
    }

    printf("Max %d Poz %d \n", max, max_i);
    printf("Min %d Poz %d ", min, min_i); 
    */

   int v[10];
   int M[10][10];
   int n;

    scanf("%d", &n);
    for(int i = 0; i<n; i++)
        for (int j = 0; j<n; j++)
            scanf("%d", &M[i][j]);

    int max = M[0][0];
    int max_i = 0;
    int max_j = 0;

    for(int i = 0; i<n; i++)
    {
        for (int j = 0; j<n; j++)
        {
            if(M[i][j] > max)
            {
                max = M[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }
    printf("Max %d Poz %d %d", max, max_i, max_j);

    return 0;
}