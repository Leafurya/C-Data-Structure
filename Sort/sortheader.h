#ifndef _sortheader__h_
#define _sortheader__h_

#include "data.h"

template<typename type>
class Sorting{
	private:
		Data<type> **datas;
		int *dataCount;
		
		void ChangeData(Data<type> *data1,Data<type> *data2);
	public:
		Sorting(Data<type> **datas,int *dataCount);
		void Sort(bool asc=true);
};

#endif
