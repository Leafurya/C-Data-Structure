#ifndef _arraylistheader__h_
#define _arraylistheader__h_

#include "sort.h"

#ifndef MAXSIZE
#define MAXSIZE 10
#endif

template<typename type>
class ArrayList:public Sorting<type>{
	private:
		//LData data[MAXSIZE];
		Data<type> *data;
		int dataCount;
		int maxSize;
	public:
		ArrayList();
		ArrayList(int listSize);
		
		int Append(type data);
		int Insert(int index,type data);
		int Remove(type data);
		int RemoveByIndex(int index);
		int Search(type data);
		bool IsFull();
		bool IsEmpty();
		bool Compare(int index,type data);
		type Get(int index);
		
		int getDataCount();
};

#endif
