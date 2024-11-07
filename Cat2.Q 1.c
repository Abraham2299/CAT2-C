#include<stdio.h>
#include<stdlib.h>

struct employee {
char name[25];
int id;
char department[20];
float salary;
char email[50];
};
int main(){
struct employee empl;
strcpy(empl.name,"John Doe");
empl.id=12345;
strcpy(empl.department,"Human Resource");
 empl.salary=55000.50;
strcpy(empl.email,"John.doe@company.com");


printf("name: %s\n",empl.name);
printf("id: %d\n",empl.id);
printf("department: %s\n",empl.department);
printf("salary: %.2f\n",empl.salary);
printf("email: %s\n",empl.email);
return 0;
}


