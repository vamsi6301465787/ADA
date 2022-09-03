#include<stdio.h>
#include<stdlib.h>
#define MAXTREEHT 100
struct minHeapNode
{
    char data;
    unsigned freq;
    struct minHeapNode*left,*right;
};
struct minHeap
{
    unsigned size;
    unsigned capacity;
    struct minHeapNode**array;
};
struct minHeap*newNode(char data,unsigned freq)
{
    struct minHeapNode*temp=(struct MinHeapNode*)malloc(sizeof(struct minHeapNode));
    temp->left=temp->right=NULL;
    temp->data=data;
    temp->freq=freq;
    return temp;
};
struct minHeap*createmMinHeap(struct minHeap*)malloc(sizeof(struct minHeap));
minHeap->size=0;
minHeap->capacity=capacity;
minHeap->array=(struct minHeapNode**)malloc(minHeap->capacity*sizeof(struct minHeapNode***a,struct minHeapNode***b)
return minHeap;
void swapMinHeapNode(struct minHeapNode***a,struct minHeapNode***b)
{
    struct minHeapNode*t=*a;
    *a=*b;
    *b=t;
}
void minHeapify(struct minHeap*minHeap,int idx)
{
    int smallest =idx;
    int left=2*idx+1;
    int right=2*idx+2;
if(left<minHeap->size && minHeap->array[left]->freq<minHeap->array[smallest]->freq)
{

    smallest=right;
}
if(smallest!=idx)
{
    swapminheap
}




