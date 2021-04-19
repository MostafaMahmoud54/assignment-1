#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[100];
    int id;
    int day;
    int month;
    int year;
    int score;
};
int n;
struct student *s;
void insertarray()
{          //insert the values of students
    for (int i=0;i<n;i++)
   {printf("Enter the student (%d) name  ",i+1);    scanf("%*c");  fgets((s+i)->name,sizeof((s+i)->name),stdin);
    printf("Enter the student (%d) id  ",i+1);      scanf ("%d", &(s+i)->id);
    printf("Enter the student (%d) day  ",i+1);     scanf ("%d", &(s+i)->day);
    printf("Enter the student (%d) month  ",i+1);   scanf ("%d", &(s+i)->month);
    printf("Enter the student (%d) year  ",i+1);    scanf ("%d", &(s+i)->year);
    printf("Enter the student (%d) score  ",i+1);   scanf ("%d", &(s+i)->score);
    printf("#####DONE#####\n");
    }

}
void insertendarray()
{      //insert student at the end of the array
     n++;
    s = (struct student*) realloc(s,n * sizeof(struct student));
    printf("Enter the student name\n ");     scanf("%*c");  fgets((s+n-1)->name,sizeof((s+n-1)->name),stdin);
    printf("Enter the student id\n");      scanf ("%d", &(s + n-1)->id);
    printf("Enter the student day\n ");     scanf ("%d", &(s + n-1)->day);
    printf("Enter the student month\n ");   scanf ("%d", &(s + n-1)->month);
    printf("Enter the student year\n ");    scanf ("%d", &(s + n-1)->year);
    printf("Enter the student score\n ");   scanf ("%d", &(s + n-1)->score);

}
void insertmiddlearray()
{     //insert student at middle of the array
    n++;
   s = (struct student*) realloc(s,n * sizeof(struct student));
   t:
    printf ("Insert the student index that you want to insert in = ");
    int k;
    scanf("%d", &k);
    if(k>n-1)

      { printf("Can not insert in index greater than %d\n",n-1);
        goto t;}
    else
     {
     for(int j=n-1;j>k-1;j--)
         {
             s[j]=s[j-1];
         }
    printf("Enter the student name\n ");    scanf("%*c");  fgets((s+k)->name,sizeof((s+k)->name),stdin);
    printf("Enter the student id\n ");      scanf ("%d", &(s + k)->id);
    printf("Enter the student day\n ");     scanf ("%d", &(s + k)->day);
    printf("Enter the student month\n ");   scanf ("%d", &(s + k)->month);
    printf("Enter the student year\n ");    scanf ("%d", &(s + k)->year);
    printf("Enter the student score\n ");   scanf ("%d", &(s + k)->score); }

}

void insertbeginning()
{  //insert in the beginning of the array
 n++;
   s = (struct student*) realloc(s,n * sizeof(struct student));

    for(int i=n-1;i>0;i--)
    {
        s[i]=s[i-1];

    }
         printf("Enter the student name\n ");  scanf("%*c");  fgets((s+0)->name,sizeof((s+0)->name),stdin);
         printf("Enter the student id\n ");    scanf ("%d", &(s + 0)->id);
         printf("Enter the student day\n ");   scanf ("%d", &(s + 0)->day);
         printf("Enter the student month\n "); scanf ("%d", &(s + 0)->month);
         printf("Enter the student year\n ");  scanf ("%d", &(s + 0)->year);
         printf("Enter the student score\n "); scanf ("%d", &(s + 0)->score);
         }

void print()
{  //print function to print the final change that has happened in the array
    if(n==0)
        printf("The list is empty");
    for (int i=0;i<n;i++)
    {
        printf ("Name of Student number (%d) : %s",i+1, (s+i)->name);
        printf ("id : %d\n", (s+i)->id);
        printf ("day of birth : %d\n", (s+i)->day);
        printf ("month : %d\n", (s+i)->month);
        printf ("year : %d\n", (s+i)->year);
        printf ("Last year score : %d\n", (s+i)->score);
    }
}

int main()
{
    printf("Welcome to Assignment 1!\n");
     printf("Enter the number of students: ");
    scanf ("%d", &n);

    s = (struct student*) malloc(n * sizeof(struct student));
    insertarray(); print();

 y:
 printf("\n How can i help you? \nEnter 1 to insert a new student in the beginning \n 2 to insert in the middle \n 3 to insert at the end \n 4 to print \n if you want to exit press 5 \n");

 int k;
 scanf("%d",&k);
 switch(k)     //switch case to make the user choose from
 {
   case 1: insertbeginning();   goto y; //operation to insert a new student in the beginning
   case 2: insertmiddlearray(); goto y; //operation to insert a new student in the middle
   case 3: insertendarray();    goto y; //operation to insert a new student in the end
   case 4: print(); goto y;
   case 5: break;
 }
    return 0;
}
