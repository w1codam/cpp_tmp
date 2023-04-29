#ifndef BASE_H
#define BASE_H

#include <string>


class Base {
public:
	virtual	~Base() {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif