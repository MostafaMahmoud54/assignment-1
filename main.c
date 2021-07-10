// Name:Ame Mousa              sec:3   bn21
// Name:Lobna Ahmed Ismail     sec:3   bn:25
// Name:Mostafa Mahmoud        sec:4   bn:20

#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include <time.h>
int n;
struct student *s;
struct student
{
    char name[100];
    int id;
    int day;
    int month;
    int year;
    int score;
};

void insertarray()
{          //%%%%%%%
    for (int i=0;i<n;i++)
   {printf("Write the Name of student number (%d) ",i+1);    scanf ("%s", (s+i)->name);
    printf("Enter Id: ");                                    scanf ("%d", &(s+i)->id);
    printf("Enter Last year score: ");                       scanf ("%d", &(s+i)->score);
    printf("Enter Day of birth: ");                          scanf ("%d", &(s+i)->day);
    printf("Enter Month: ");                                 scanf ("%d", &(s+i)->month);
    printf("Enter Year: ");                                  scanf ("%d", &(s+i)->year);
    printf("\n");
    }

}
void insertendarray()
{       n++;        //&&&&&&&
     clock_t tic=clock();

    s = (struct student*) realloc(s,n * sizeof(struct student));
    printf("Enter the student Name: ");    scanf ("%s", (s + n-1)->name);
    printf("Enter ID: ");                  scanf ("%d", &(s + n-1)->id);
    printf("Enter Last year score: ");     scanf ("%d", &(s + n-1)->score);
    printf("Enter Day of birth: ");        scanf ("%d", &(s + n-1)->day);
    printf("Enter Month: ");               scanf ("%d", &(s + n-1)->month);
    printf("Enter Year: ");                scanf ("%d", &(s + n-1)->year);
    printf("\n");

    clock_t toc=clock();
    printf("time execution %f seconds\n\n",(double)(toc-tic)/CLOCKS_PER_SEC);
}
void insertmiddlearray()
{   n++;
    clock_t tic=clock();

   s = (struct student*) realloc(s,n * sizeof(struct student));
   t:
    printf ("Insert the student index that you want to insert in = ");
    int k;
    scanf("%d", &k);
    printf("\n");
    if(k>n || k==0)

      { printf("Enter index from 1 to %d\n",n);
        goto t;}
    else if(k==1)
        {
            insertbeginning(); n--;
            return;
        }
    else if(k==n-1)
    {
        insertendarray();
        return;
    }
        else
     {for(int j=n-1;j>k-1;j--)
         {
             s[j]=s[j-1];
         }
    printf("Enter the student Name: ");    scanf ("%s", (s + k-1)->name);
    printf("Enter ID: ");                  scanf ("%d", &(s + k-1)->id);
    printf("Enter Last year score: ");     scanf ("%d", &(s + k-1)->score);
    printf("Enter Day of birth: ");        scanf ("%d", &(s + k-1)->day);
    printf("Enter Month: ");               scanf ("%d", &(s + k-1)->month);
    printf("Enter Year: ");                scanf ("%d", &(s + k-1)->year);
    printf("\n");
     }
    clock_t toc=clock();
    printf("time execution %f seconds\n\n",(double)(toc-tic)/CLOCKS_PER_SEC);
}

void insertbeginning()
{
 n++;
    clock_t tic=clock();

   s = (struct student*) realloc(s,n * sizeof(struct student));

    for(int i=n-1;i>0;i--)
    {
        s[i]=s[i-1];

    }
    printf("Enter the student Name: ");    scanf ("%s", (s + 0)->name);
    printf("Enter ID: ");                  scanf ("%d", &(s + 0)->id);
    printf("Enter Last year score: ");     scanf ("%d", &(s + 0)->score);
    printf("Enter Day of birth: ");        scanf ("%d", &(s + 0)->day);
    printf("Enter Month: ");               scanf ("%d", &(s + 0)->month);
    printf("Enter Year: ");                scanf ("%d", &(s + 0)->year);
    printf("\n");

    clock_t toc=clock();
    printf("time execution %f seconds\n\n",(double)(toc-tic)/CLOCKS_PER_SEC);

}

void print()
{
    if(n==0)
        printf("The list is empty \n");
    for (int i=0;i<n;i++)
    {
        printf ("Name of Student number (%d) is %s\n",i+1,(s+i)->name);
        printf ("Id %d\n",(s+i)->id);
        printf ("Last year score %d\n",(s+i)->score);
        printf ("Day of birth %d\n",(s+i)->day);
        printf ("Month %d\n",(s+i)->month);
        printf ("Year %d\n",(s+i)->year);
        printf("\n");
          //Printing values in array of structures
    }
}

int main ()
{
    printf("welcome to our project \n");
    printf("Enter the number of students: ");
    scanf ("%d", &n);

    s = (struct student*) malloc(n * sizeof(struct student)); // Initializing pointer to a structure
    insertarray();                                   //Creating memory for array of structures dynamically

 y:
 printf("Enter 1 to insert a new student in the beginning \n Enter 2 to insert in the middle \n Enter 3 to insert at the end \n Enter 4 to print \n if you want to exit press 5 \n ");

 int k;
 scanf("%d",&k);
 switch(k)
 {
   case 1: insertbeginning();   goto y;
   case 2: insertmiddlearray(); goto y;
   case 3: insertendarray();    goto y;
   case 4: print(); goto y;
   case 5: break;
 }

  printf(" Size of structure %d\n",sizeof(struct student));   //to calculate the size of structure

    return 0;}

