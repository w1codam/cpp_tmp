#include <iostream>
#include "Serializer.hpp"

int main(void)
{
	Data data = {.name = "Hallo", .number = 400};
	std::cout << "data         : " << data.name << ", " << data.number << " @ " << &data << std::endl;

	uintptr_t	serialized = Serializer::serialize(&data);
	std::cout << "serialized   : " << serialized << " ( 0x" << std::hex << serialized << " )" << std::endl;

	Data*		deserialized = Serializer::deserialize(serialized);
	std::cout << "deserialized : " << deserialized << std::endl;
}
