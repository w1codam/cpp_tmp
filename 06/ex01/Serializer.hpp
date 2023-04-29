#ifndef SERIALIZER_H
#define SERIALIZER_H

#include <cstdint>
#include <string>

struct Data
{
	int			number;
	std::string	name;
};


class Serializer {
private:
	Serializer();
	Serializer(const Serializer& c);
	~Serializer();
	Serializer & operator = (const Serializer &c);
public:
	static uintptr_t	serialize(Data* ptr);
	static Data*		deserialize(uintptr_t raw);
};

#endif