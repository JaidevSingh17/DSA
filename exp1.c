#include <stdio.h>

int insert();
int delete();
int linear();

int a[20],i,n,c=0;
int main()
{
    int choice;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The %d elements are:",n);
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\nEnter your choice\n1.Delete\n2.Linear Search\n3.Insert\n");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            delete();
            break;
        case 2:
            linear();
            break;
        case 3:
            insert();
            break;
        default:
            printf("\nInvalid choice....");
    }
}
int delete()
{
    int x,pos;
    printf("\nEnter the element to delete: ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c=1;
            pos=i;
            break;
        }
    }
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    if(c==0)
    {
        printf("The element is not found..");
    }
    else
    {
        printf("\nThe element after deletion are: ");
        for(i=0;i<n;i++)
        {
            printf("%d\t",a[i]);
        }
    }
    
}
int linear() 
{
    
    int x;
    printf("\nEnter the element to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++) {
        if (x == a[i]) 
        {
            c = 1;
            printf("The element is found");           
        }

    }
    if(c==0)
    {
        printf("The element is not found");
    }
}
int insert()
{
    int x,pos;
    printf("\nEnter the element to Insert:");
    scanf("%d",&x);
    printf("\nEnter the position to insert:");
    scanf("%d",&pos);
 
    for(i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=x;
    n=n+1;

    for(i=0;i<n;i++)
    {
        printf("%d\t", a[i] );
    }
}