/*
    队列的顺序存储
*/
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
//----------预定义常量和类型---------
#define TRUE 1
#define FALSE 1
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
//#define OVERFLOW -2
typedef int Status;
//队列的预定义常量和类型
#define MaxSize 50
typedef int Elemtype;
//队列的结构体
typedef struct {
    Elemtype data[MaxSize];
    int top;
}SqStack;
/*栈的相关操作函数*/
//初始化一个栈（静态）
void InitStack(SqStack &stack)
{
    stack.top=-1;//初始化栈顶指针
}
//判栈空
Status StackEmpty(SqStack stack)
{
    if(stack.top==-1) return TRUE;
    else return FALSE;
}
//入栈
Status EnStack(SqStack &stack,Elemtype x)
{
    if(stack.top==MaxSize-1) return FALSE;//栈满
    stack.data[++stack.top]=x;//栈顶赋值
    return TRUE;
}
//出栈
Status DeStack(SqStack &stack,Elemtype &x)
{
    if(stack.top==-1) return FALSE;//栈空
    x=stack.data[stack.top--];//栈顶出值
    return TRUE;
}

int main()
{
    Elemtype e;
    SqStack Stack;
    InitStack(Stack);
    for(int i=1;i<=10;i++)
    {
        EnStack(Stack,i+25);
        cout<<"入栈："<<i+25<<endl;
    }

    for(int i=1;i<=10;i++)
    {
        DeStack(Stack,e);
        cout<<"出栈："<<e<<endl;
    }
    //printf("hello world 你好世界\n");
    system("pause");
    return 0;
}


