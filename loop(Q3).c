#include<stdio.h>
#include<malloc.h>
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

void removeloop(node *start)
{
 node *p,*q,*w;
 p=q=w=start;

 while(p!=NULL)
 {
     q=p->next;
     while(q!=NULL)
     {
         if(p->value=q->value)
         {
             p->next=q->next;

         }
         q=q->next;
     }
     p=p->next;
 }
while(w->next!=NULL)
{
    printf("hello");
    printf("%d",w->value);
    w=w->next;

}

}


int main()
{
 int no;

    printf("enter no. of elements in list.. \n");
    scanf("%d",&no);
    head=create(no);
    removeloop(head);
    return 0;
}
