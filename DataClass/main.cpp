#include <iostream>
#include <cstdio>
#include "data.h"
using namespace std;

struct Pack{
	int pack;
	char str[10];
};

int main() {
	int num1=1123;
	int num2=1123;
	int num3=12;
	int tnum;
	
	Pack pack1={30,"hello"};
	Pack pack2={50,"hello"};
	Pack pack3={30,"hello"};
	Pack tpack;
	
	Data<Pack> structData(pack1);
	Data<int> intData=(num1);
	
	tpack=structData.getData();
	printf("tpack.pack: %d\n",tpack.pack);
	printf("tpack.str: %s\n",tpack.str);
	printf("weight: %d\n",structData.getWeight());
	printf("pack1==pack2: %d\n",structData.Compare(pack2));
	printf("pack1==pack3: %d\n",structData.Compare(pack3));
	
	tnum=intData.getData();
	printf("tnum: %d\n",tnum);
	printf("weight: %d\n",intData.getWeight());
	printf("num1==num2: %d\n",intData.Compare(num2));
	printf("num1==num3: %d\n",intData.Compare(num3));
	
	return 0;
}
