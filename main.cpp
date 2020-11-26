#include <iostream>
#include "file_read.h"
#include "FCFS.h"
#include <vector>
#include "file_write.h"
using namespace std;

int main()
{
    while(1)
    {
        cout<<"请选择进程调度方式："<<endl;
        cout<<"1---先来先服务调度算法"<<endl;
        cout<<"2---短作业优先调度算法"<<endl;
        cout<<"3---优先级调度算法"<<endl;
        cout<<"4---高响应比优先调度算法"<<endl;
        cout<<"5---轮转调度算法"<<endl;
        cout<<"6---多队列调度算法"<<endl;
        cout<<"7---多级反馈队列调度算法"<<endl;
        cout<<"8---最早截止时间优先调度算法"<<endl;
        cout<<"9---最低松弛度优先调度算法"<<endl;
        cout<<"0---退出系统"<<endl;
        int choice;
        cin>>choice;
        if(choice==1)
        {
            file_read();
            choice_1();
        }
        if(choice==0)
        {
            exit(0);
        }
    }
    return 0;
}
