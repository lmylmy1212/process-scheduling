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
        cout<<"��ѡ����̵��ȷ�ʽ��"<<endl;
        cout<<"1---�����ȷ�������㷨"<<endl;
        cout<<"2---����ҵ���ȵ����㷨"<<endl;
        cout<<"3---���ȼ������㷨"<<endl;
        cout<<"4---����Ӧ�����ȵ����㷨"<<endl;
        cout<<"5---��ת�����㷨"<<endl;
        cout<<"6---����е����㷨"<<endl;
        cout<<"7---�༶�������е����㷨"<<endl;
        cout<<"8---�����ֹʱ�����ȵ����㷨"<<endl;
        cout<<"9---����ɳڶ����ȵ����㷨"<<endl;
        cout<<"0---�˳�ϵͳ"<<endl;
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
