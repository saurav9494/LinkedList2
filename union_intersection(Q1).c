#include<malloc.h>
#include<stdio.h>
struct Node
{
    int value;
    struct Node *next;
};
typedef struct Node node;
node *head1,*head2;
node *create1(int n)
{
     node *p;
    int k;

    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head1=(node*)malloc(sizeof(node));
            p=head1;
        }
            else
            {
         p->next=(node *)malloc(sizeof(node));
         p=p->next;
            }
            scanf("%d",&p->value);
    }
    p->next=NULL;
        return(head1);
}


node *create2(int n)
{
     node *p;
    int k;

    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head2=(node*)malloc(sizeof(node));
            p=head2;
        }
            else
            {
         p->next=(node *)malloc(sizeof(node));
         p=p->next;
            }
            scanf("%d",&p->value);
    }
    p->next=NULL;
        return(head2);
}

node* join(node *a,node *b)
{
    node *p,*s,*d;
    p=a;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=b;

d=s=a;
while(s!=NULL)
{
    s=s->next;
}
    return d;
}

void delete_duplicate(node *start)
{

    node *pt1,*pt2,*f;
    pt1=pt2=start;
    while(pt1!=NULL)
    {
        pt2=pt1->next;
        while(pt2!=NULL)
        {
            if(pt1->value==pt2->value)
            {
                pt1->next=pt2->next;
            }
            q=q->next;
        }
        pt1=pt1->next;

    }
    f=start;
    while(f!=NULL)
    {
        printf("%d",f->value);
        f=f->next;
    }


}
int main()
{
    int no1,no2;
    node *fn,*fs,*sc;
    printf("enter no. of elements in 1st list.. \n");

    scanf("%d",&no1);
    fs=create1(no1);
    printf("enter no. of elements in 2nd list... \n");
    scanf("%d",&no2);
    sc=create2(no2);
    fn=join(fs,sc);
    delete_duplicate(fn);
    return 0;
}
