#include<stdio.h>

int main(){
int a;
int b;
int scores[2][4]={{65,92,84,72},{35,70,59,67}};
 
 for(a=0;a<2;a++){
 for(b=0;b<4;b++){
 
 
 printf("scores [%d][%d]=%d\n",a,b, scores[a][b]);}
 }
 return 0;
 }