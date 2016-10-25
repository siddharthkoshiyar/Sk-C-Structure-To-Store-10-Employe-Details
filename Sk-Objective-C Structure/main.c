//
//  main.c
//  Sk-Objective-C Structure
//
//  Created by Student P_04 on 25/10/16.
//  Copyright © 2016 Siddharth Koshiyar. All rights reserved.
//

#include<stdio.h>
struct employe
{
    int employenumber,basicsalary;
    char name[20],department[20];
    
} ;
int main()
{
    struct employe e[10];
    int i;
    printf("Enter the detail of \n");
    for(i=0;i<10;i++)
    {
        e[i].employenumber=i+1;
        printf("Employe number is %d\n",e[i].employenumber);
        printf("Enter the Name:\n");
        scanf("%s",e[i].name);
        printf("Enter department of Employe\n");
        scanf("%s",e[i].department);
        printf("Enter the BasicSalary:\n");
        scanf("%d",&e[i].basicsalary);
        printf("\n");
    }
    for(i=0;i<10;i++)
    {
        printf("Employe Number: %d\n",e[i].employenumber);
        printf("Employe Name: %s\n",e[i].name);
        printf("Employe Department: %s\n",e[i].department);
        printf("Employe Basic Sallry: %d\n",e[i].basicsalary);
        printf("\n");
        
        
        
        
    }
    return 0;
}

