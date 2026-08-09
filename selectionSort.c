#include<stdio.h>
void main(){
int i,j,min,temp;
int arr[5]={5,1,3,2,9};
for(i=0;i<5;i++){
min=i;
for(j=i;j<5;j++){
if(arr[j]<arr[min]){
min=j;
}
}
temp=arr[i];
arr[i]=arr[min];
arr[min]=temp;
}
for(i=0;i<5;i++){
printf("%d",arr[i]);
}
}

    