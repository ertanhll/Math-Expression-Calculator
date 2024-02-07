

#include <stdio.h>

int factorial(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact*=i;
   
    return fact;
}
int power(int x, int y){
    
    int i,power=1;
    for(i=0;i<y;i++)
        power*=x;
    
    return power;
}

int combination(int n,int r){
    
    if(n==r) return 1;
    if(n!=0&&r==0) return 1;
    else return factorial(n)/(factorial(r)*factorial(n-r));
}

int main() {
    
    int n;
    double result=0, sum1=0, sum2=0;
    int i,z,j;
    
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
        
        sum1=0;
        for(z=1;z<=n-i;z++){
            sum1+=power(i,z);
        }
        sum2=0;
        for(j=1;j<=i;j++){
            sum2+=(power(j,n)*combination(n, j)/(double)factorial(n));
        }
        if(sum2==0) return 0;
        else result+=(sum1/(double)sum2);
        }
   
    printf("result is:%.2lf\n",result);
   
    return 0;
}
