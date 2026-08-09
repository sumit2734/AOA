#include<stdio.h>
void main(){
int i,target=778,mid,h,l;
int arr[1000];
for(i=0;i<1000;i++){
arr[i]=i;
}
l=0;
h=1000-1;
while(l<=h){
mid=(h+l)/2;
if(target==arr[mid]){
printf("%d",arr[mid]);
break;
}
else if(target>arr[mid]){
l=mid+1;
}
else{
h=mid-1;
}
}
}


    