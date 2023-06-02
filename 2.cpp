#include <iostream>
#include <list>
#include <vector>
#include <utility>
using namespace std;


class db {
public:
	vector <pair<int,string>> ani;
	void insert(int a, string b) {
		int index = a % 10;
		ani.push_back(make_pair(index, b));
	}
	void Search(int a) {
		for (auto i : ani)
		{
			if (i.first==a)
			{
				cout << i.second;
			}
		}
	}
	void Delete(int a) {
		for (auto i =ani.begin(); i!=ani.end();)
		{
			if (i->first == a) {
				i = ani.erase(i);
			}
			else {
				++i;
			}
		}
	}
};

int main() {
	db obj;
	obj.insert(1, "Aniket");
	obj.insert(2, "Nikka");
	obj.insert(3, "Nik");
	obj.insert(4, "Scylla");
	obj.insert(5, "Ani");
	obj.insert(6, "Funny");
	obj.insert(7, "Angel");
	obj.Delete(1);
	obj.Search(1);
	return 0;
}
