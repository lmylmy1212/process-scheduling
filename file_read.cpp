#include "string.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include "file_read.h"
using namespace std;
vector<int> vectorInt;
void file_read()
{



    ifstream fin("E:\\1.txt");
    string line_info,input_result;

    if(fin) // �и��ļ�
    {
        getline (fin, line_info);
        while (getline (fin, line_info)) // line�в�����ÿ�еĻ��з�
        {
                stringstream input(line_info);
                //���������input_result�У�������vectorString��
                //cout<<"line_info: "<<line_info<<endl;
                while(input>>input_result)
                    vectorInt.push_back(atoi(input_result.c_str()));
        }
        /*
        for(int j=0;j<vectorInt.size();j++)
        {
                    cout<<vectorInt[j]<<endl;
        }*/
    }
    else // û�и��ļ�
    {
        cout<<"no file"<<endl;;
    }
}

