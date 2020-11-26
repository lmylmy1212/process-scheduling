
#include<iostream>
#include<fstream>
#include "file_write.h"
#include "file_read.h"
#include "FCFS.h"
using namespace std;
extern struct process a[10];
extern int n;
void file_write(){
    //int myid=1,procnum=64;
    ofstream out("E:\\2.txt",ios::app);//app表示每次操作前均定位到文件末尾
    if(out.fail()){
        cout<<"error\n";
    }
    for(int i=0;i<n;i++)
    {
        out<<" 进程："<<a[i].name;
        out<<" 到达时间："<<a[i].arrive;
        out<<" 服务时间："<<a[i].service;
        out<<" 周转时间："<<a[i].zhouzhuan;
        out<<" 带权周转时间："<<a[i].daiquan;
        out<<" 完成时间："<<a[i].finish<<endl;

    }

    out.close();

}

