#include<stdio.h>
// c program to check 
// one negative num and more than on pos num

int main(){
    int arr[]={1,-2,5};
    int store=0;
    int store2=0;
    int i;



    for( i=0; i<sizeof(arr)/sizeof(int); i++){
        if(arr[i]>0) {
            store+=1;
        }

            else
            store2+=1;      
        }


        if(store==2&&store2==1){
            printf("yes");
        }
           
        
    
}
