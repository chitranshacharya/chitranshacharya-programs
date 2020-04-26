#include<stdio.h>


struct employees
{
    int Empno;
    char Empname[100], Department[100];
    float Salary;
};

main()
{   
    int i;
    struct employees e1[20];
    for(i=0;i<20;i++)
    {
        printf("\nEnter details of employee %d=",i+1);
        printf("\nEmployee number=");
        scanf("%d",&e1[i].Empno);
        printf("\nEmployee name=");
        scanf("%s",e1[i].Empname);
        printf("\nDepartment=");
        scanf("%s",e1[i].Department);
        printf("\nSalary=");
        scanf("%f",&e1[i].Salary);
    }
   
    for(i=0;i<20;i++)
    {
        printf("\n\nDetails of employee %d=",i+1);
        printf("\n\tEmployee number=%d",e1[i].Empno);
        printf("\n\tEmployee name=%s",e1[i].Empname);
        printf("\n\tDepartment=%s",e1[i].Department);
        printf("\n\tSalary=%.2f",e1[i].Salary);
    }
   
}
