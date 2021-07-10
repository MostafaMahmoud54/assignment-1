
// Name:Amr Moussa Ramadan     sec:3   bn21
// Name:Lobna Ahmed Ismail     sec:3   bn:25
// Name:Mostafa Mahmoud Abdelkader sec:4   bn:20

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
struct node
{
    struct student st;
    struct node *next;
};
struct node *head;
struct node *tail;
int size=0;
void insert(struct node *H)
{
    clock_t tic=clock();

    struct node * temp = (struct temp *) malloc(sizeof(struct node));
    temp->next=H;
    H=temp;
    printf("Enter the student Name: ");
    scanf("%*c");
    fgets(temp->st.name,sizeof(temp->st.name),stdin);
    printf("Enter ID: ");
    scanf("%d",&temp->st.ID);
    printf("Enter Last year score: ");
    scanf("%d",&temp->st.score);
    printf("Enter Day of birth: ");
    scanf("%d",&temp->st.day);
    printf("Enter Month: ");
    scanf("%d",&temp->st.month);
    printf("Enter Year: ");
    scanf("%d",&temp->st.year);
    printf("\n");
    if(tail==NULL)
    {
        tail=H;
    }
    head=H;
    size++;

    clock_t toc=clock();
    printf("time execution %f seconds\n\n",(double)(toc-tic)/CLOCKS_PER_SEC);
}
void insertend(struct node*H)
{   clock_t tic=clock();

    if(H==NULL)
        {
            insert(H);
            return;
        }
    struct node * temp1 = (struct temp1 *) malloc(sizeof(struct node));
    struct node * temp2 = (struct temp2 *) malloc(sizeof(struct node));
    temp1=tail;
    temp1->next=temp2;
    temp2->next=NULL;
    printf("Enter the student Name: ");
    scanf("%*c");
    fgets(temp2->st.name,sizeof(temp2->st.name),stdin);
    printf("Enter ID: ");
    scanf("%d",&temp2->st.ID);
    printf("Enter Last year score: ");
    scanf("%d",&temp2->st.score);
    printf("Enter Day of birth: ");
    scanf("%d",&temp2->st.day);
    printf("Enter Month: ");
    scanf("%d",&temp2->st.month);
    printf("Enter Year: ");
    scanf("%d",&temp2->st.year);
    tail=temp2;
    size++;
}

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
{       n++;        
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
void insertmiddle(struct node*H)
{
    clock_t tic=clock();

    int x;
    t:
    printf ("Insert the student index that you want to insert in = ");
    scanf("%d", &x);
    struct node * temp3 = (struct temp3 *) malloc(sizeof(struct node));
    struct node * temp4 = (struct temp4 *) malloc(sizeof(struct node));

    if(x==1)
    {
        insert(H);
        return;
    }
    temp3=H;
   if(x==size+1)
    {
        insertend(H);
        return;
    }
    if(x>(size)|| x==0)
    {
        printf("Enter index from 1 to %d \n",size+1);
        goto t;
    }
    for(int i=0;i<x-2;i++)
    {
        temp3=temp3->next;
    }
    temp4->next=temp3->next;
    temp3->next=temp4;
    printf("Enter the student name: ");
    scanf("%*c");
    fgets(temp4->st.name,sizeof(temp4->st.name),stdin);
    printf("Enter ID: ");
    scanf("%d",&temp4->st.ID);
    printf("Enter Last year score: ");
    scanf("%d",&temp4->st.score);
    printf("Enter Day of birth: ");
    scanf("%d",&temp4->st.day);
    printf("Enter Month: ");
    scanf("%d",&temp4->st.month);
    printf("Enter Year: ");
    scanf("%d",&temp4->st.year);
    if(tail==temp3)
       tail=temp4;
    size++;
    printf("\n");

    clock_t toc=clock();
    printf("time execution %f seconds\n\n",(double)(toc-tic)/CLOCKS_PER_SEC);
}
void print(struct node*H)
{
    struct node *temp;

    if(H == NULL)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = H;
        int z=0;
        while(temp != NULL)
        {
            printf("Name of Student number (%d): %s",z+1,temp->st.name);
            printf("ID: %d\n",temp->st.ID);
            printf("Last year score: %d\n",temp->st.score);
            printf("Day of birth: %d\n",temp->st.day);
            printf("Month: %d\n", temp->st.month);
            printf("Year: %d\n", temp->st.year);
            printf("\n");
            temp = temp->next;
            z++;
        }
    }
}
int n;

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
  printf("choose how you want to handle your data: 1-array \n2-linkedlist");
  int choice;
  scanf("%d",&choice);
  switch (choice)
    case 1{
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
    }
  case 2{
        printf("Welcome To Our Project \n");
    tail=NULL;
    head=NULL;
    printf("Enter the number of students : ");
    scanf ("%d", &n);
    for (int x=0;x<=n-1;x++)
        insertend(head);
y:
 printf("Enter 1 to insert a new student in the beginning \n Enter 2 to insert in the middle \n Enter 3 to insert at the end \n Enter 4 to print \n if you want to exit press 5 \n");
 int k;
 scanf("%d",&k);
 switch(k)
 {
   case 1: insert(head); goto y;
   case 2: insertmiddle(head); goto y;
   case 3: insertend(head); goto y;
   case 4: print(head); goto y;
   case 5: break;
 }
 printf(" Size of structure student %d\n",sizeof(struct student));   //to calculate the size of structure student
 printf(" Size of structure node %d\n",sizeof(struct node));   //to calculate the size of structure node
  }
    return 0;}

