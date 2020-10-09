#ifndef _data__h_
#define _data__h_

#include "dataheader.h"

template<typename type>
Data<type>::Data(type data){
	InitMember(data);
}

template<typename type>
Data<type>::Data(){
	memset(&this->data,0,sizeof(type));
}

template<typename type>
type Data<type>::getData(){
	return data;
}

template<typename type>
bool Data<type>::Compare(type data){
	char *pData=(char *)&this->data;
	char *pParamData=(char *)&data;
	bool result=true;
	
	for(int i=0;i<sizeof(type);i++){
		if(*(pData+i)!=*(pParamData+i)){
			result=false;
			break;
		}
	}
	return result;
}

template<typename type>
int Data<type>::getSize(){
	return sizeof(data);
}

template<typename type>
void Data<type>::setData(type data){
	InitMember(data);
}

template<typename type>
int Data<type>::getWeight(){
	return weight;
}

template<typename type>
void Data<type>::InitMember(type data){
	int weight=0;
	char *pData=(char *)&data;
	
	memset(&this->data,0,sizeof(type));
	this->data=data;
	for(int i=0;i<sizeof(type);i++){
		weight+=*(pData+i);
	}
	this->weight=weight;
}

#endif
