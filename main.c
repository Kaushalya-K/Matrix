//upper triangular
#include <stdio.h>
#include <stdlib.h>

struct  matrix
{
    int *a;//*a;
    int n;
};
void set(struct matrix *m,int i,int j,int x)
{
    if(i<=j)
    {
        m->a[j*(j-1)/2 + (i-1)]=x;
    }
}
int get(struct matrix m,int i,int j)
{
    if(i<=j)
        return m.a[j*(j-1)/2 + (i-1)];
    else
        return 0;
}
void display(struct matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i<=j)
            {
                printf("%d ",m.a[j*(j-1)/2 + (i-1)]);
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
int main()
{
    struct matrix m;
    int i,j,x;
    printf("enter the dimension");
    scanf("%d",&m.n);

    m.a=(int*)malloc(m.n*(m.n+1)/2 * sizeof(int));

    printf("enter the elements");
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            scanf("%d",&x);
            set(&m,i,j,x);
        }
    }
    printf("\n\n");
    display(m);
}
