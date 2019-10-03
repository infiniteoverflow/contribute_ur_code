#include "stdio.h"
#include "stdlib.h"

int stack[100],top=-1;

void push(int data){
    top++;
    stack[top]=data;
}

int pop(){
    int temp = stack[top];
    top--;
    return temp;
}

int main(){
    char exp[100],tStr[20];
    int tKey=0;
    printf("Enter a postfix expression.\n");
    gets(exp);
    int i;
    for(i=0;exp[i]!='\0';i++){
        if(exp[i] = ' '){
            int k=0;
            int j;
            for(j=tKey;j<i;j++){
                tStr[k]=exp[j];
                k++;
            }
            tKey=i+1;
            tStr[k]='\0';
            int tNumber = atoi(tStr);
            for(j=0;tStr[j]!='\0';j++)
                printf("%c",tStr[j]);
            push(tNumber);
        }
        else if(exp[i] == '+'){
            int o1=pop(),o2=pop();
            push(o1+o2);
            tKey = i+1;
        }
        else if(exp[i] == '-'){
            int o1=pop(),o2=pop();
            push(o1-o2);
            tKey = i+1;
        }
        else if(exp[i] == '/'){
            int o1=pop(),o2=pop();
            push(o1/o2);
            tKey = i+1;
        }
        else if(exp[i] == '*'){
            int o1=pop(),o2=pop();
            push(o1*o2);
            tKey = i+1;
        }
    }
    printf("Result = %d",pop());
    return 0;
}

