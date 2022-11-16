#include<stdio.h>
void main()
{
int ar1[20], ar2[20], ar3[40];
int m,n;
void read_array(int [], int);
void print_array(int [], int);
void merge(int [],int [],int [],int,int);
printf("no. of elements in 1 array [1-20]:");
scanf("%d",&m);
printf("enter elements in non decreasing order:");
read_array(ar1,m);
printf("no. of elements in 2 array [1-20]:");
scanf("%d",&n);
printf("enter elements in non decresing order:");
read_array(ar2,n);
merge(ar1,ar2,ar3,m,n);
printf("merged array\n");
print_array(ar3,m+n);
}
void read_array(int ar[],int n)
{
int i;
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
return;
}
void print_array(int ar[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d\n",ar[i]);
return;
}
void merge(int a[],int b[],int c[], int m, int n)
{
int i,j,k;
i=j=k=0;
while(i<m && j<n)
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else
{
c[k]=b[j];
j++;
k++;
}
while(i<m)
c[k++]=a[i++];
while(j<n)
c[k++]=b[j++];
}


