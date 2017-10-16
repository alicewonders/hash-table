#include "Value.h"

class HashTable
{
	private:
		string student_name; //ключ!!!
		Value student_info;
		HashTable *next; 
	public:
		HashTable(int key, string value);
		~HashTable();
		
		void swap(HashTable &c); //c - от слова current
		void clear(); //очистка контейнера
		bool erase(const string &key); //удаление элемента по заданному ключу
		bool insert(const string &key, const Value &val); //возврат значения по заданному ключу. вопрос - в файле вместо const string const Key -откуда?

		size_t size() const;
		bool empty() const;
};