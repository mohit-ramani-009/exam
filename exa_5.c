#include<stdio.h>
#define m printf
#define d scanf
struct Employee_laptop
{
    int emp_id;
    char emp_name[50];
    char emp_laptop_name[50];
    int emp_laptop_genaration;
    char emp_laptop_model_name[50];
    char emp_laptop_ram[50];
    char emp_laptop_ssd;
    char emp_laptop_hhd;
    
};

int main() 
{
    int num_employ;
    
    m("Enter the number of employees: ");
    d("%d", &num_employ);
    
    struct Employee_laptop employ[500];

    m("Enter details for %d employees:\n",num_employ);
    
    int i;
    
    for (i = 0; i < num_employ; i++) 
	{
        m("\nEmployee %d:\n", i + 1);
        
        m("enter employ name: ");
        d("%s", employ[i].emp_name);
        m("ID: ");
        d("%d", &employ[i].emp_id);
        m("enter laptop name: ");
        d("%s", employ[i].emp_laptop_name);
        m("enter laptop generation: ");
        d("%d", &employ[i].emp_laptop_genaration);
        m("enter laptop model name: ");
        d("%s", employ[i].emp_laptop_model_name);
        m("enter laptop ram: ");
        d("%s", employ[i].emp_laptop_ram);
        m("enter laptop ssd storage: ");
        d("%s", &employ[i].emp_laptop_ssd);
        m("enter laptop hhd storage: ");
        d("%s", &employ[i].emp_laptop_hhd);
    }

    m("\nEmployee Records:\n");
    
    for (i = 0; i < num_employ; i++) 
	{
        m("\nEmployee %d:\n", i + 1);
        m("ID: %d\n", employ[i].emp_id);
        m("employ_name: %s\n", employ[i].emp_name);
        m("employ_laptop_name: %s\n", employ[i].emp_laptop_name);
        m("employ_laptop_genaration: %d\n", employ[i].emp_laptop_genaration);
        m("employ_laptop_model_name: %s\n", employ[i].emp_laptop_model_name);
        m("employ_laptop_ram: %s\n", employ[i].emp_laptop_ram);
        m("employ_laptop_ssd: %s\n", employ[i].emp_laptop_ssd);
        m("employ_laptop_hhd: %s\n", employ[i].emp_laptop_hhd);
        
	}
	
}

