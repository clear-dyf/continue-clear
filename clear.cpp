#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(void){
	string ret;
	for(int i=0;i<5;i++){
		cout<<"��ʼ��"<<i+1<<"������"<<endl;
		cout<<"��ϲ����������ҫ��?"<<endl;
		cin>>ret;
	if(ret!="yes"){
		 continue;
	}
	cout<<"�Ӹ�΢�Ű�..."<<endl;
	}
	system("pause");
	return 0;
}
