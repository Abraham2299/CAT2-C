#include<stdio.h>
int main(){
float hours_worked,hourly_wage,gross_pay,taxes,net_pay;
float regular_hours =40.0, overtime_rate=1.5;

float tax_rate1=0.15, tax_rate2=0.20;
float tax_threshold=800.0;

printf("enter the hours worked in a week");
scanf("%f", & hours_worked);
printf("enter the hourly_wage");
scanf("%f", & hourly_wage);

//calculate the gross_pay
if(hours_worked>regular_hours){
gross_pay=((regular_hours*hourly_wage)+(hours_worked-regular_hours)*hourly_wage*overtime_rate);
}
else{gross_pay=hours_worked*hourly_wage;
}

//calculate the taxes
if(gross_pay<=tax_threshold){
taxes=gross_pay*tax_rate1;
}
else{taxes=(tax_threshold*tax_rate1)+((gross_pay-tax_threshold)*tax_rate2);

}

//calculate the net_pay

net_pay=gross_pay-taxes;

//display the results
printf("Gross Pay: %.2f\n",gross_pay);

printf("Taxes: %.2f\n",taxes);
 
 printf("Net Pay: %.2f\n",net_pay);
 return 0;
 }