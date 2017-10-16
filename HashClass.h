#include "Value.h"

class HashTable
{
	private:
		string student_name; //����!!!
		Value student_info;
		HashTable *next; 
	public:
		HashTable(int key, string value);
		~HashTable();
		
		void swap(HashTable &c); //c - �� ����� current
		void clear(); //������� ����������
		bool erase(const string &key); //�������� �������� �� ��������� �����
		bool insert(const string &key, const Value &val); //������� �������� �� ��������� �����. ������ - � ����� ������ const string const Key -������?

		size_t size() const;
		bool empty() const;
};