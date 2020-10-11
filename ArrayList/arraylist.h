#ifndef _arraylist__h_
#define _arraylist__h_

#include <cstdio>
#include "arraylistheader.h"

template<typename type>
ArrayList<type>::ArrayList():Sorting<type>(&this->data,&this->dataCount){
	data=new Data<type>[MAXSIZE];
	dataCount=0;
	this->maxSize=MAXSIZE;
}
template<typename type>
ArrayList<type>::ArrayList(int listSize):Sorting<type>(&this->data,&this->dataCount){
	data=new Data<type>[listSize];
	dataCount=0;
	this->maxSize=MAXSIZE;
}
template<typename type>
bool ArrayList<type>::IsFull(){
	if(dataCount<maxSize){
		return false;
	}
	else{
		return true;
	}
}
template<typename type>
bool ArrayList<type>::IsEmpty(){
	if(dataCount<=0){
		return true;
	}
	else{
		return false;
	}
}
template<typename type>
int ArrayList<type>::Append(type data){
	if(!IsFull()){
		this->data[dataCount].setData(data);
		dataCount++;
		
		return 0;
	}
	return -1;
}
template<typename type>
int ArrayList<type>::Insert(int index,type data){
	if(!IsFull()){
		type nowData(this->data[index].getData());
		type nextData;
		for(int i=index;i<dataCount;i++){
			nextData=this->data[i+1].getData;
			this->data[i+1].setData(nowData);
			nowData=nextData;
		}
		this->data[index].setData(data);
		dataCount++;
		
		return 0;
	}
	return -1;
}
template<typename type>
int ArrayList<type>::getDataCount(){
	return dataCount;
}
template<typename type>
int ArrayList<type>::RemoveByIndex(int index){
	if(!IsEmpty()){
		for(int i=index;i<dataCount-1;i++){
			data[i].setData(data[i+1].getData());
		}
		dataCount--;
		
		return 0;
	}
	return -1;
}
template<typename type>
int ArrayList<type>::Remove(type data){
	int index=Search(data);
	
	return RemoveByIndex(index);
}
template<typename type>
int ArrayList<type>::Search(type data){
	for(int i=0;i<dataCount;i++){
		if(this->data[i].Compare(data)){
			return i;
		}
	}
	return -1;
}
template<typename type>
type ArrayList<type>::Get(int index){
	return data[index].getData();
}
#endif
