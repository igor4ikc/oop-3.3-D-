#pragma once
#include<sstream>
#include<string> 
#include "Triad.h"

using namespace std;

class TimeZ :private Triad
{
public:
	TimeZ() {}
	TimeZ(int first, int second, int third);
	TimeZ(const TimeZ& tri);
	TimeZ& operator = (const TimeZ& tri);

	operator string () const;

	friend ostream& operator << (ostream& out, const TimeZ& m);
	friend istream& operator >> (istream& in, TimeZ& m);

	void setF(int value);
	void setS(int value);
	void setT(int value);

	TimeZ& operator ++ ();
	TimeZ& operator -- ();
	TimeZ operator ++ (int);
	TimeZ operator -- (int);

	friend bool operator ==(const TimeZ& t1, const TimeZ& t2);
	friend bool operator >(const TimeZ& t1, const TimeZ& t2);
	friend bool operator <(const TimeZ& t1, const TimeZ& t2);
	friend bool operator >=(const TimeZ& t1, const TimeZ& t2);
	friend bool operator <=(const TimeZ& t1, const TimeZ& t2);
	friend bool operator !=(const TimeZ& t1, const TimeZ& t2);

};

