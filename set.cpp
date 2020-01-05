#include <iostream>
#include <set>
#include <iterator>

using namespace std;

int main() {
	set <int, greater <int> > s1;
    s1.insert(5);
	s1.insert(79);
	s1.insert(54);
	s1.insert(23);
	s1.insert(118);
	s1.insert(89);

	set <int, greater <int> > :: iterator itr;
	cout << "The set is:";
	for (itr = s1.begin(); itr != s1.end(); ++itr) {
		cout << " " << *itr;
	}
	cout << "\n\nLength of the set: "<<s1.size();
	cout<<"\n\nMaximum number of elements that the set can hold: "<<s1.max_size();
	s1.insert(34);
	cout << "\n\nThe set after insertion is:";
	for (itr = s1.begin(); itr != s1.end(); ++itr) {
		cout << " " << *itr;
	}
	cout << "\n\nNew length of the set: "<<s1.size();
	return 0;

}

