#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int s;

int  binarydecimale(int *k,int n);
int * binaryconvert(int n,int k){
  
    int* array = (int*)malloc(k * sizeof(int));
    int i=k-1;

   while(i>=0){
    
        array[i]=n%2;
        i--;
        n=n/2;
    }
    return array;
   }
   //hexa function;
     int  *binaryhexa(int *k,int n){
       int  *hexatable;int size;
       if(n%4==0){
           size=n/4;
           s=size;
           hexatable=(int *)malloc(size*sizeof(int));
       }else{
        size=n/4+1;
        s=size;
        hexatable=(int *)malloc(size*sizeof(int));
       }
        int j=3;
        int  temp[j];
        
        for(int i=n-1;i>=0;i--){
          
          
            temp[j]=k[i];
            j--;
            if(j<0){
              
              switch(binarydecimale(temp,4)){
                case 10 : hexatable[size-1]=65;
                
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }

                
                break;
                case 11 : hexatable[size-1]=66;
                
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }
                break;
                case 12 : hexatable[size-1]=67;
                
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }
                break;
                case 13 : hexatable[size-1]=68;
                
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }
                break;
                case 14 : hexatable[size-1]=69;
                
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }
                break;
                case 15 : hexatable[size-1]=70;
                
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }
                break;
                default:
                hexatable[size-1]=binarydecimale(temp,4);
                
                size--;
                j=3;
                for(int i=0;i<4;i++){
                    temp[i]=0;
                       }
                break;
              }
              printf("%d",size);
            
          }
           
        }
        
        printf("la taille %d le j est %d",size-1,j);
        if((size-1==0 && j==0) || (size-1==0 && j<0)){
          
          hexatable[size-1]=binarydecimale(temp,4);
        }
        
        
         











        return hexatable;
     }
     //coverting binary to decimale;
    
int  binarydecimale(int *k,int n){
 int number=0;int j=0;
 for(int i=n-1;i>=0;i--){
    
    number+=k[i]* (int)pow(2,j);
    j++;
 }
 
 return number;
}

void main(){
    int n;
    int c;
    printf("Enter the number of bits\n");
    scanf("%d",&c);printf("enter a number that you want to convert to binary ");
    scanf("%d",&n);
    
 ////// / / //////////////////////////
int *k=binaryconvert(n,c);
printf("the number in binnary is : \n");
for(int i=0;i<c;i++){
    printf("%d",k[i]);
    
}
/////////////////////////
printf("\n");
int xz=binarydecimale(k,c);
printf("\n");
printf("the value of the binary code in  decimal is : %d\n",xz);

///////////////////////////////
int *h=binaryhexa(k,c);
printf("la valeur en hexa decimal est : ");
for(int i=0;i<=s-1;i++){
  if(h[i]>=65 && h[i]<=70){
    printf("%c\t",h[i]);
  }
  else{
    printf("%d\t",h[i]);

  }
  
}


}