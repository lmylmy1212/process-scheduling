#include "string.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "file_read.h"
#include "file_write.h"
#include "FCFS.h"
extern vector<int> vectorInt;
struct process a[10];
int n=4;
using namespace std;


void input(process a[],int n)
{
    for(int i=0;i<n;i++)
    {
        a[i].name=vectorInt[i*3];
        a[i].arrive=vectorInt[i*3+1];
        a[i].service=vectorInt[i*3+2];
    }
}

void print(process a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" 进程："<<a[i].name;
        cout<<" 到达时间："<<a[i].arrive;
        cout<<" 服务时间："<<a[i].service;
        cout<<" 周转时间："<<a[i].zhouzhuan;
        cout<<" 带权周转时间："<<a[i].daiquan;
        cout<<" 完成时间："<<a[i].finish<<endl;

    }
}

void paixu(process a[],int n)
{
    int flag=1;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].arrive>a[j+1].arrive)
            {
                process temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
void fcfs(process a[],int n)
{
    paixu(a,n);
    a[0].finish=a[0].arrive+a[0].service;
    a[0].zhouzhuan = a[0].finish - a[0].arrive;
    a[0].daiquan = a[0].zhouzhuan/a[0].service;
    for(int i=1;i<n;i++)
    {
        if(a[i].arrive<a[i-1].finish)
        {
            a[i].finish = a[i-1].finish+a[i].service;
            a[i].zhouzhuan = a[i].finish - a[i].arrive;
            a[i].daiquan = a[i].zhouzhuan/a[i].service;
        }else
        {
             a[i].finish = a[i].arrive+a[i].service;
             a[i].zhouzhuan = a[i].finish - a[i].arrive;
             a[i].daiquan = a[i].zhouzhuan/a[i].service;
        }
    }
    //print(a,n);
}
void choice_1()
{
    input(a,n);
    fcfs(a,n);
    ofstream out("E:\\2.txt",ios::app);
    out<<" 先来先服务："<<endl;
    out.close();
    file_write();
}
