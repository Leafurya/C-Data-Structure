#ifndef _sord__h_
#define _sord__h_

#include "sortheader.h"

template<typename type>
Sorting<type>::Sorting(Data<type> **datas,int *dataCount){
	this->datas=datas;
	this->dataCount=dataCount;
}

template<typename type>
void Sorting<type>::ChangeData(Data<type> *data1,Data<type> *data2){
	Data<type> temp;
	temp.setData(data1->getData());
	data1->setData(data2->getData());
	data2->setData(temp.getData());
}

template<typename type>
void Sorting<type>::Sort(bool asc){
	if(asc){
		for(int i=*dataCount;i>0;i--){
			for(int j=0;j<i-1;j++){
				if(datas[0][j].getWeight()>datas[0][j+1].getWeight()){
					ChangeData(&datas[0][j],&datas[0][j+1]);
				}
			}
		}
	}
	else{
		for(int i=*dataCount;i>0;i--){
			for(int j=0;j<i-1;j++){
				if(datas[0][j].getWeight()<datas[0][j+1].getWeight()){
					ChangeData(&datas[0][j],&datas[0][j+1]);
				}
			}
		}
	}
}

#endif
