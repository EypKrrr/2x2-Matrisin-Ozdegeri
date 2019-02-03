//Eyup KORURER 06.10.2017
//GNU GCC compiler ile derlenmiþtir.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
int n=2,i,j;

    int matris[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d.satir %d.sutunu giriniz:",(i+1),(j+1));
            scanf("%d",&matris[i][j]);
        }
    }

            double kokler[2];
            double delta= pow((matris[0][0]+matris[1][1]),2)-4*(matris[0][0]*matris[1][1]-matris[0][1]*matris[1][0]);
            if(delta<0)
            {
                printf("Reel kok yoktur.");
            }else if(delta==0)
            {
                double kok=(matris[0][0]+matris[1][1])/-2;
                printf("Ozdegerler birbirine eþittir ve ozdeger= %lf",kok);
                kokler[0]=kok;kokler[1]=kok;
            }else{
                double kok1,kok2;
                kok1=(matris[0][0]+matris[1][1]+sqrt(delta))/2;
                kok2=(matris[0][0]+matris[1][1]-sqrt(delta))/2;
                printf("ozdeger1= %lf\n",kok1);
                printf("ozdeger2= %lf",kok2);
                kokler[0]=kok1;kokler[1]=kok2;
            }


    return 0;
}
