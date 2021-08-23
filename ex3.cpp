#include<stdio.h>
#include<math.h>
int c(long long n){
    if(n%2==0)return 0;
    for(long long i=3;i<sqrt(n);i+=2){
        if(n%i==0){
            return 0;
       }
    }
    return 1;
}
int main(){
    long long a=600851475143,l;
    for(long long i=2;i<sqrt(a);i++){
        if(c(i)&&a%i==0){
            l=i;
        }
    }
    printf("%lld",l);
}
