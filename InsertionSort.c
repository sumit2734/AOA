#include<stdio.h>
int main(){
int i,j,temp;
int arr[5]={8,6,2,1,0};
for(i=0;i<5;i++){
printf("%d\t",arr[i]);
}
printf("\n");
for(i=1;i<5;i++)
{
temp=arr[i];
 for(j=i-1;j>=0 && arr[j]>temp;j--){
 arr[j+1]=arr[j];
 }
 arr[j+1]=temp;
 }
for(i=0;i<5;i++){
printf("%d\t",arr[i]);
}
return 0;
}