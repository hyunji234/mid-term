#include <stdio.h>

double aver-age(double in1, double in2);

int main(void){
  double in1=0.0, double in2=0.0;
  double sum=0.0, double average=0.0;

  scanf("%f %f",&in1,&in2);
  printf("aver=%f",aver-age(in1,in2));
}

double aver-age(double in1, double in2){
  double sum=0.0;
  double average=0.0;
  sum=in1+in2;
  average=sum/2.0;
  
  return average;
}
