#include<stdio.h>
int main()
{
    int percentage;
    float salary,present_Salary,salary_increase;
    scanf("%f",&salary);
    if(salary>0 && salary<=400.00)
    {
        percentage =15;
        salary_increase = (salary *  percentage )/100;
        present_Salary = (salary +salary_increase);
    }
   else if(salary>400.01 && salary<=800.00)
    {
        percentage =12;
        salary_increase = (salary *  percentage )/100;
    }
    else if(salary>800.01 && salary<=1200.00)
    {
        percentage = 10;
        salary_increase = (salary *  percentage )/100;
        present_Salary = (salary + salary_increase);
    }
    else if(salary>1200.01 &&  salary<=2000.00)
    {
        percentage =7;
        salary_increase = (salary *  percentage )/100;
        present_Salary = (salary + salary_increase);
    }
    else if (salary>2000)
    {
        percentage =4;
        salary_increase = (salary *  percentage )/100;
        present_Salary = (salary + salary_increase);
    }
        printf("Novo salario: %.2f\n",present_Salary);
        printf("Reajuste ganho: %.2f\n",salary_increase );
        printf("Em percentual: %d %%\n", percentage );
    return 0;
}
