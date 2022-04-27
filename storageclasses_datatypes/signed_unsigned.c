#include<stdio.h>
int main()
{
        unsigned int a=-258;
        int b=256;
        char c='a';
        unsigned char d='e';
        float e=1.22;
        double f=1.5648;
        printf("size of integer=%ld\n",sizeof(int));
        printf("size of unsigend integer=%ld\n",sizeof(unsigned int));
        printf("size of character=%ld\n",sizeof(char));
         printf("size of unsigned character%ld\n",sizeof(unsigned char));
         printf("size of float=%ld\n",sizeof(float));
         printf("size of double=%ld\n",sizeof(double));
}

