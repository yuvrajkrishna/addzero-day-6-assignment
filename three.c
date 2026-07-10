#include<stdio.h>
#include<stdbool.h>

int main ( ) {
    
    int n  = 111011 ;
    bool isbinary = true;

   if(n < 0){
     isbinary = false;
   }
    
   else{
        while ( n > 0 ) {
            
            int lastdigit = n % 10 ;

            if (lastdigit > 1){
                isbinary = false;
                break; 
            }
            
            
            n /= 10 ; 
        }
   }

    if(isbinary){
        printf("IT IS BINARY NUMBER");
    }
    else{
        printf("it is not binary number");
    }
}