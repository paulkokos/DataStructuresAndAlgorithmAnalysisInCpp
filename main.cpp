//
// Created by paulkokos on 30/6/2018.
//

#include <iostream>
#include <vector>
using namespace std;

template <typename Comparable>
const Comparable & findMax(const vector<Comparable> &a)
{
	int maxIndex =0;
	for (int i=1;i<a.size();++i) {
		if (a[maxIndex] < a[i] ){
			maxIndex=i;
		}
		return a[maxIndex];

	}
}
//Class IntCell
class IntCell {
	public:
		explicit IntCell(int initialValue = 0)
		{ storedValue = new int{initialValue};}

		~IntCell() {
			delete storedValue;
		}

		IntCell(const IntCell &rhs){
			storedValue = new int {*rhs.storedValue};
		}

		IntCell(IntCell && rhs) : storedValue {rhs.storedValue}
		{rhs.storedValue = nullptr;}

		IntCell & operator=(const IntCell & rhs) {
			if (this != &rhs) {
				*storedValue = *rhs.storedValue;
			}
			return *this;
		}

		IntCell & operator = (IntCell && rhs) {
			std::swap(storedValue,rhs.storedValue);
			return *this;
		}

		int read () const {
			return *storedValue;
		}
		void write (int x) {
			*storedValue = x;
		}
	private:
		int *storedValue;
};

int main(){
    vector<int> v1 (60);
    vector<double> v2 (60);
    vector<string> v3 (60);
    vector<IntCell> v4 (60);

    cout << findMax(v1) << endl;
    cout << findMax(v2) << endl;
    cout << findMax(v3) << endl;
    //cout << findMax(v4) << endl;
    return 0;
}
