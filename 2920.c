#include <stdio.h>

int main(){
    int input[8]={0};
    int a=0;
    
    for(int i=0;i<8;i++){
        scanf("%d", &input[i]);
    }
    
    if(input[0]==1){
        for(int i=0;i<8;i++){
            if(input[i]==i+1){
                a=1;
            }
            else{
                a=0;
                break;
            }
        }
    }
    
    else if(input[0]==8){
        for(int i=0;i<8;i++){
            if(input[i]==8-i){
                a=2;
            }
            else{
                a=0;
                break;
            }
        }
    }
    
    if(a==1)
        printf("ascending");
    else if(a==2)
        printf("descending");
    else
        printf("mixed");
        
    return 0;
}