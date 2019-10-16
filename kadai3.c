#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 20

int func_sum(int score[SIZE]){
   int sum=0;
   for(int i=0;i<SIZE;i++){
       sum += score[i];
   }
   return sum;
}

double func_hinsa(int score[SIZE],int avg){
   int bunsan_1=0;
   int bunsan_2;
   double hinsa;
   for(int i=0;i<SIZE;i++){
       bunsan_1 += (score[i]-avg)*(score[i]-avg);
   }
   bunsan_2 = bunsan_1/SIZE;
   hinsa = sqrt(bunsan_2 * 1.0);
   return hinsa;
}
 
int main(void){
   int rika[SIZE]={65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
   int english[SIZE]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};

   int rika_sum,english_sum;
   float rika_avg,english_avg;
   double rika_hinsa,english_hinsa;

   rika_sum = func_sum(rika);
   english_sum = func_sum(english);
 
   rika_avg = rika_sum*1.0/SIZE*1.0;
   english_avg = english_sum*1.0/SIZE*1.0;

   rika_hinsa = func_hinsa(rika,rika_avg);
   english_hinsa = func_hinsa(english,english_avg);
   
   printf("理科　合計点:%d", rika_sum);
   printf("\n");
   printf("英語　合計点:%d", english_sum);
   printf("\n");

   printf("理科　平均点:%f", rika_avg);
   printf("\n");
   printf("英語　平均点:%f", english_avg);
   printf("\n");

   printf("理科　標準偏差:%f",rika_hinsa);
   printf("\n");
   printf("英語　標準偏差:%f", english_hinsa);
   printf("\n");

   return 0;
}
