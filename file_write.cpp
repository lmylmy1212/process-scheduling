
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
    ofstream out("E:\\2.txt",ios::app);//app��ʾÿ�β���ǰ����λ���ļ�ĩβ
    if(out.fail()){
        cout<<"error\n";
    }
    for(int i=0;i<n;i++)
    {
        out<<" ���̣�"<<a[i].name;
        out<<" ����ʱ�䣺"<<a[i].arrive;
        out<<" ����ʱ�䣺"<<a[i].service;
        out<<" ��תʱ�䣺"<<a[i].zhouzhuan;
        out<<" ��Ȩ��תʱ�䣺"<<a[i].daiquan;
        out<<" ���ʱ�䣺"<<a[i].finish<<endl;

    }

    out.close();

}

