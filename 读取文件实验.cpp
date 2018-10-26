#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream filein;//读文件
    ofstream fileout;//写文件
    /*filein.open("c.txt");
    if(!filein){
       cerr<<"读取失败"<<endl;
       return -1;
    }
    string q;
    filein>>q;
    cout<<"读取："<<q<<endl;
    filein.close();*/
    fileout.open("c.txt");
    if(!fileout){
    cout<<"打开失败"<<endl;
    return -1;
    }
    fileout<<"fdsfsd";
    fileout.close();
}
