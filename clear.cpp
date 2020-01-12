#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int main(void){
	string ret;
	for(int i=0;i<5;i++){
		cout<<"开始第"<<i+1<<"次相亲"<<endl;
		cout<<"你喜欢打王者荣耀吗?"<<endl;
		cin>>ret;
	if(ret!="yes"){
		 continue;
	}
	cout<<"加个微信吧..."<<endl;
	}
	system("pause");
	return 0;
}
