#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream filein;//���ļ�
    ofstream fileout;//д�ļ�
    /*filein.open("c.txt");
    if(!filein){
       cerr<<"��ȡʧ��"<<endl;
       return -1;
    }
    string q;
    filein>>q;
    cout<<"��ȡ��"<<q<<endl;
    filein.close();*/
    fileout.open("c.txt");
    if(!fileout){
    cout<<"��ʧ��"<<endl;
    return -1;
    }
    fileout<<"fdsfsd";
    fileout.close();
}
