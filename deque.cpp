//Author: Aniruddh Kathiriya
//Assignment 7
#include <iostream>
#include "deque.h"

using namespace std;

int main() {

deque<int> dq1;
	//Testing push_front
    dq1.push_front(10);
    dq1.push_front(20);
    dq1.push_front(30);
    dq1.push_front(40);
    dq1.push_front(50);
    dq1.push_front(60);
	cout<<dq1<<endl;
	assert(dq1.front()==60);
	assert(dq1.back()==10);
	//Testing Pop front and back
	dq1.pop_front();
	assert(dq1.front()==50);
	dq1.pop_back();
	assert(dq1.back()==20);
	//Testing push_back
	dq1.push_back(9);
	dq1.push_back(8);
	dq1.push_back(7);
	dq1.push_back(6);
	assert(dq1.front()==50);
	assert(dq1.back()==6);
	//Testing empty function
	dq1.pop_back();
	dq1.pop_back();
	dq1.pop_back();
	dq1.pop_back();
	dq1.pop_back();
	dq1.pop_back();
	dq1.pop_back();
	dq1.pop_back();
	assert(dq1.empty());
	//Testing size function
	assert(dq1.size()==0);
	dq1.push_front(10);
	dq1.push_back(20);
	assert(dq1.size()==2);
	//Testing equality function
	deque<int> dq2;
	dq2.push_front(10);
	dq2.push_back(20);
	assert(dq1==dq2);
	dq2.push_back(20);
	assert(!(dq1==dq2));
	//Testing Push back on empty
	deque<int> dq3;
	dq3.push_back(111);
	cout<<dq3<<endl;
	dq3.push_back(12);
	dq3.push_back(13);
	cout<<dq3<<endl;
	assert(dq3.front()==111);
	assert(dq3.back()==13);
	//Testing Assignment Operator
	deque<int> dq4;
	cout<<dq3<<endl;
	dq4=dq3;
	cout<<dq4<<endl;
	assert(dq3==dq4);
	//Testing Copy Constructor
	deque<int> dq5(dq4);
	assert(dq5==dq4);
	//Testing output function
    cout<<"deque 1: "<<dq1;
    cout<<"All tests passed";


    return 0;
}
