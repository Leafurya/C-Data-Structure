#ifndef _dataheader__h_
#define _dataheader__h_

template<typename type>
class Data{
	private:
		type data;
		int weight;
		
		void InitMember(type data);
	public:
		Data(type data);
		Data();
		
		bool Compare(type data);
		type getData();
		int getSize();
		void setData(type data);
		int getWeight();
};

#endif
