#include<stdio.h>
#include<stdlib.h>
void traverse(int *a,int s)
{
    int i ;
     printf("Array Traversing \n");
    for(i = 0; i < s; i ++)
    {
        printf("%d " , a[i]);
    }
}

// Insert the element
void insert(int* a,int s)
{
    int p, x ;
    printf("\nEnter the position where you will insert : ");
    scanf("%d ", &p);
    printf("\nEnter the element : ");
    scanf("%d ", &x);
    a [p] = x;
    traverse(a,s);
} 
void main()
{
    int a [10] = {1,2,3,4,5,6,7,8,9 };
    int s ;
    s = 9;
    // Array Traversing 
    traverse(a,s);
    // Insert the element 
    insert(a,s);



    
}