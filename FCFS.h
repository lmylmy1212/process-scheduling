#include "string.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
struct process{
    int name;
    int arrive;
    int service;
    int finish;
    int zhouzhuan;
    int daiquan;
};

void input(process a[],int n);
void print(process a[],int n);
void paixu(process a[],int n);
void fcfs(process a[],int n);
void choice_1();
