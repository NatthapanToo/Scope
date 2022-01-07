#include <stdio.h>
#include <stdlib.h>

int main(int argc,char*argv[]){
  //atoi atof

    int i,N;
    int *a; // argv <- a
    
    
    N=argc-1;
    a=(int*) malloc (sizeof(int)*N);
    //a[N]
   
    for(i= 1;i<argc ;i++){
        
        a[i-1]=atoi(argv[i]);
       

    }

    int sum=0;
  for(i= 0;i<N ;i++){
       if(a[i]%2){

        printf("%d\n",a[i]);
         sum+=a[i];
        }
  }

  printf("Sum of odd numbers is %d\n",sum);    
}

