#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "arraylist.h"

using namespace std;

typedef int LData;

int main() {
	srand(time(NULL));
	
	ArrayList<LData> list(10);
	LData data;
	
	for(int i=0;i<10;i++){
		LData ran=rand()%100;
		if(list.Search(ran)==-1){
			cout<<ran<<" | ";
			list.Append(ran);
		}
		else{
			list.Remove(ran);
			cout<<ran<<" is exist | ";
			i--;
		}
	}
	
	cout<<endl;
	for(int i=0;i<list.getDataCount();i++){
		cout<<list.Get(i)<<" | ";
	}
	
	cout<<endl;
	list.Sort();
	for(int i=0;i<list.getDataCount();i++){
		cout<<list.Get(i)<<" | ";
	}
	
	cout<<endl;
	list.Sort(false);
	for(int i=0;i<list.getDataCount();i++){
		cout<<list.Get(i)<<" | ";
	}
	
	return 0;
}
