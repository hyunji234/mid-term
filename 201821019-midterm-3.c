#include <stdio.h>

void swap(int *pa, int *pb);

int main(void){
  int pa=10, pb=20;
  printf("before: pa=%d, pb=%d\n", pa,pb);
  swap(&pa, &pb);
  printf("after: pa=%d, pb=%d", pa,pb);
  return 0;
}

void swap(int *pa,int *pb){
  int temp = *pa;
  *pa=*pb;
  *pb=temp;
}
