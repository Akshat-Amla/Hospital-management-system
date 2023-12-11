#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//The Code Given Below Is A Declaring  Method Various Structures And Variable
struct ad
{
    char name[30];
    char disease[30];
    int ward,phone,age;
} x[100];
int n,i,j=0,a=0,sum=0,g,flag,num;
void read();
void add();
void view();
void search();
void edit();
void del();
void show();
//The Code Given Below Is For The Main Module
int main()
{
    system("Color 2");
    read();
    int c,i,q;
// Making a pattern for the home screen of the output
    printf("\n\t\t\t\t\t   *                                               *\n\t\t\t\t\t   *                                               *\n");
    printf("\t\t\t\t\t* * * * WELCOME TO BREACH CANDY HOSPITAL PORTAL * * * *");
    printf("\n\t\t\t\t\t   *    - - - - - - - - - - - - - - - - - - - -    *\n\t\t\t\t\t   *                                               *\n");

    while(c!=6)
    {
        printf("\n\t\t\t\t\t\t\t* * * * * * * * * *");
        printf("\n\t\t\t\t\t\t\t*OPTIONS AVAILABLE*\n");
        printf("\t\t\t\t\t\t\t* * * * * * * * * *\n");
        printf("\n\n\t1. Add Information\n\t2. View Information\n\t3. Search\n\t4. Edit Information\n\t5. Delete Information\n\t6. Exit\n\n\tEnter your choice : ");
//Asking for the choice of the user
        scanf("%d",&c);
//Making it clear
        fflush(stdin);
//Adding the details of patient
        if(c==1)
        {
     //       system("cls");
            add();
        }
//Viewing the details of patient
        else if(c==2)
        {
            system("cls");
            view();
        }
//Searching the details of the patient
        else if(c==3)
        {
            system("cls");
            search();
        }
//Editing the details of the patient
        else if(c==4)
        {
            system("cls");
            edit();
        }
//deleting the details of patient
        else if(c==5)
        {
            system("cls");
            del();
        }
//Terminating the program
        else if(c==6)
        {
            printf("\n:) THANK YOU FOR VISITING OUR PORTAL :)\n");
            //write();
            return 0;
        }
        else
        {
            system("cls");
            printf("\n\nInvalid input , try again by using valid inputs");
        }
        printf("\n\n");
    }
}
//The Code Given Below Is For The Adding Module
void add()
{
    printf("\n\n");
    printf("There are already %d records of patients exisisting in our database\n\n",num);
    printf("Please enter how many entry do you want to add in our database :\n");
//Asking for how many records do you want to add in database
    scanf("%d",&n);
    sum=n+num;

    for(i=num; i<sum; i++)
    {
        printf("\n");
        fflush(stdin);
        printf("Enter Patient's Name : ");
        gets(x[i].name);
        fflush(stdin);
        printf("Enter Disease : ");
        gets(x[i].disease);
        fflush(stdin);
        printf("Enter the Age : ");
        scanf("%d",&x[i].age);
        fflush(stdin);
        printf("Enter Ward no : ");
        scanf("%d",&x[i].ward);
        fflush(stdin);
        printf("Enter Phone Number : ");
        scanf("%d",&x[i].phone);
        fflush(stdin);
        printf("\n");
        j++;
        a++;
        num++;
    }
}
//The Code Given Below Is For The View Module
void view()
{
    for(i=0; i<num; i++)
    {
        printf("\n");
        printf("Serial Number : %d\n",i);
        printf("Name : ");
        puts(x[i].name);
        printf("Disease : ");
        puts(x[i].disease);
        printf("Ward no : %d\nPhone number : 0%d\nAge :%d",x[i].ward,x[i].phone,x[i].age);
        printf("\n\n");
    }
}
//The Code Given Below Is For The Module Edit
void edit()
{
    int q,p;
    fflush(stdin);
    printf("What do you want to edit ?\n");
    printf("Enter your option\n");
    printf("1.Name\n2.Disease\n3.Age\n4.Ward\n5.Phone no.\n");
    printf("Option : ");
//Asking user what detail of patient is to be edited
    scanf("%d",&q);
    if(q<=5)
    {
        printf("Enter the serial no of that patient : (0 - %d) : ",num-1);
//Asking for what serial no. patient detail is to be editied
        scanf("%d",&p);
        if(p<num)
        {
//Editing patient name
            if(q==1)
            {
                fflush(stdin);
                printf("Enter the new name : ");
                gets(x[p].name);

            }
//Editing patient disease
            else if(q==2)
            {
                fflush(stdin);
                printf("Enter the new Disease : ");
                gets(x[p].disease);
            }
//Editing patient age
            else if(q==3)
            {
                fflush(stdin);
                printf("Enter the new Age : ");
                scanf("%d",&x[p].age);
            }
//Editing patient ward no.
            else if(q==4)
            {
                fflush(stdin);
                printf("Enter the new Ward no : ");
                scanf("%d",&x[p].ward);
            }
//Editing patient phone number
            else if(q==5)
            {
                fflush(stdin);
                printf("Enter the new Phone no : ");
                scanf("%d",&x[p].phone);
            }
        }
        else
        {
            printf("\n\nInvalid Serial \nTry Again !!\n\n");
        }
    }
    else
    {
        printf("\n\nInvalid option\nTry Again!!\n\n");
    }
}
//The Code Given Below Is For The Search Module
void search()
{
    int s,h,f;
    char u[100];
    printf("By what do you want to search ?\n");
    printf("1.Serial no.\n2.Name\n3.Disease\n4.Ward no.\n5.Phone no.\n6.Age\n\nEnter your choice :  ");
//Asking on what grounds do you want to search a patient
    scanf("%d",&h);
    if(h==1)
    {
        printf("Enter Serial number of the patient : ");
        scanf("%d",&s);
        if(s<num)
        {
            printf("\n");
            printf("Serial Number : %d\n",s);
            printf("Name : ");
            puts(x[s].name);
            printf("Disease : ");
            puts(x[s].disease);
            printf("Ward no : %d\nPhone number : 0%d\nAge : %d",x[s].ward,x[s].phone,x[s].age);
            printf("\n\n");
        }
        else
            printf("\n\nNot Found\n\n");
    }
    else if(h==2)
    {
        int f=1;
        fflush(stdin);
        printf("Enter your name : ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].name)==0)
            {
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Ward no : %d\nPhone number : 0%d\nAge : %d",x[g].ward,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;

            }
        }
        if(f==1)
            printf("\nNot Found\n");



    }
    else if(h==3)
    {
        int f=1;
        fflush(stdin);
        printf("Enter Disease : ");
        gets(u);
        fflush(stdin);
        for(g=0; g<num; g++)
        {
            if(strcmp(u,x[g].disease)==0)
            {
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Ward no : %d\nPhone number : 0%d\nAge : %d",x[g].ward,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("\nNot Found\n");

    }
    else if(h==4)
    {
        int f=1;
        printf("Enter Ward number : ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].ward)
            {
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Ward no : %d\nPhone number : 0%d\nAge : %d",x[g].ward,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else if(h==5)
    {
        int f=1;
        printf("Enter Phone number : ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].phone)
            {
                printf("\n");
                printf("Serial Number : %d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Ward no : %d\nPhone number : 0%d\nAge : %d",x[g].ward,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found");
    }
    else if(h==6)
    {
        int f=1;
        printf("Enter Age = ");
        scanf("%d",&f);
        for(g=0; g<num; g++)
        {
            if(f==x[g].age)
            {
                printf("\n");
                printf("Serial Number :%d\n",g);
                printf("Name : ");
                puts(x[g].name);
                printf("Disease : ");
                puts(x[g].disease);
                printf("Ward no : %d\nPhone number : 0%d\nAge : %d",x[g].ward,x[g].phone,x[g].age);
                printf("\n\n");
                f=0;
            }

        }
        if(f==1)
            printf("Not Found\n\n");

    }
    else
        printf("\n\nInvalid input\n\n");
}
//The Code Given Below Is For The Delete Module
void del()
{
    int f,h;
    printf("Enter the serial number of the patient that you want to delete : ");
    scanf("%d",&f);
    if(f<num)
    {
        printf("What do you want ?\n");
        printf("1.Remove the whole record\n2.Remove Name\n3.Remove Disease\n4.Remove age\n5.Remove Ward\n6.Remove phone number\nEnter your choice : ");
        scanf("%d",&h);
        if(h==1)
        {
            while(f<num)
            {
                strcpy(x[f].name,x[f+1].name);
                strcpy(x[f].disease,x[f+1].disease);
                x[f].age=x[f+1].age;
                x[f].ward=x[f+1].ward;
                x[f].phone=x[f+1].phone;
                f++;
            }
            num--;
        }
        else if(h==2)
        {
            strcpy(x[f].name,"Cleared");

        }
        else if(h==3)
        {
            strcpy(x[f].disease,"Cleared");
        }
        else if(h==4)
        {
            x[f].age=0;
        }
        else if(h==5)
        {
            x[f].ward=0;
        }
        else if(h==6)
        {
            x[f].phone=0;
        }

    }
    else
        printf("\n\nInvalid Serial number\n");

}
//The Code Given Below Is For The Module Reading The Data
void read()
{
    FILE *fp = fopen("patient.txt","r");
    if(fp == NULL)
    {
//creating an empty file, so that we can open it in the next execution of this program
        fp = fopen("patient.txt","w");
        fclose(fp);
        printf("File does not exist, I JUST CREATED IT, exiting...\n\n\n");
        return 0;
    }

    num = fread(x, sizeof(struct ad),100, fp);
    fclose(fp);
}
//The Code Given Below Is For The Module Write The Data
/*void write()
{
    FILE *fp = fopen("patient.txt","w");
    if(fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    fwrite(x, sizeof(struct ad),num, fp);

    fclose(fp);
}
*/
