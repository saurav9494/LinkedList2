#include<malloc.h>
#include<stdio.h>

struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
node *head;
node *create(int n)
{
     node *p;
    int k;

    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
        }
            else
            {
         p->next=(node *)malloc(sizeof(node));
         p=p->next;
            }
            scanf("%d",&p->value);
    }
    p->next=NULL;
        return(head);
}
void display(){
node *start;
start=head;
while(start!=NULL)
{
    printf("%d->",start->value);
    start=start->next;
}}




int palin_check (int count)
{
    node *front,*rear;
    int i = 0, j;


    while (i != count / 2)
    {
        front=head;
        rear=head;
        for (j = 0; j < i; j++)
        {
            front = front->next;
        }
        for (j = 0; j < count - (i + 1); j++)
        {
            rear = rear->next;
        }
        if (front->value != rear->value)
        {
            printf("\n list is not palindrome... \n");
            return 0;
        }
        else
        {
            i++;
        }
    }
    printf("\n list is palindrome... \n");
    return 1;
}
void reverse_list()
{
    node *temp,*temp1,*var;

    temp=head;
    var=NULL;
    while(temp!=NULL)
    {
         temp1=var;
         var=temp;
         temp=temp->next;
         var->next=temp1;

    }
    head=var;

}

int main()
{
    int n;
     printf("enter number of nodes");
    scanf("%d",&n);
create(n);
display();
reverse_list();
printf("\n reversed list \n");
display();
palin_check(5);
}
