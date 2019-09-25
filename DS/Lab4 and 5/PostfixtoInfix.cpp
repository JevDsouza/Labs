#include <iostream>
#include <string.h>
enum Boolean{FALSE,TRUE};
using namespace std;
class sstack1
{

public:
    char a[20][30];
    int top=-1;
    void push(char *item);
    char* pop();
    //void display();
};
void sstack1::push(char *item)
{
    if(top==19)
    {
        cout<<"Error"<<endl;
        return;
    }
    else
    {
        strcpy(a[++top],item);
    }
}
char* sstack1 :: pop()
{
    if(top==-1)
    {
        return NULL;
    }
    else
    {
        return a[top--];
    }
}
int isoperand(char ch)
{
    return((ch>='a')&&(ch<='z')||(ch>='A')&&(ch<='Z')||(ch>='0')&&(ch<='9'));
}
int isoperator(char ch)
{
    return((ch=='+')||(ch=='-')||(ch=='*')||(ch=='^')||(ch=='/'));
}
void posttoinf(char* exp)
{
    int i;
    char str1[30],str2[30],str3[30],str4[30];
    sstack1 s;
    for(int i=0;i<exp[i]!='\0';i++)
    {
        if(isoperand(exp[i]))
        {
            str3[0]=exp[i];
            str3[1]='\0';
            s.push(str3);
        }
        else
        {
            strcpy(str1,s.pop());
            strcpy(str2,s.pop());
            str3[0]='(';
            str3[1]='\0';
            strcat(str3,str2);
            switch(exp[i])
            {
                case '+':strcat(str3,"+");
                break;
                case '-':strcat(str3,"-");
                break;
                case '*':strcat(str3,"*");
                break;
                case '/':strcat(str3,"/");
                break;
            }
            strcat(str3,str1);
            strcat(str3,")");
            s.push(str3);
        }

    }
    cout<<s.pop();
}
int main()
{
    char s[30];
    cout<<"Enter the postfix expression"<<endl;
    cin>>s;
    posttoinf(s);
    return 0;

}
