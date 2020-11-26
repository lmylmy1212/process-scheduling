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

    if(fin) // 有该文件
    {
        getline (fin, line_info);
        while (getline (fin, line_info)) // line中不包括每行的换行符
        {
                stringstream input(line_info);
                //依次输出到input_result中，并存入vectorString中
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
    else // 没有该文件
    {
        cout<<"no file"<<endl;;
    }
}

