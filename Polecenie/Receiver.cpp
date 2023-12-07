#include "Receiver.h"

void Receiver::DoSomething(const std::string& a) {
	std::cout << "Receiver: Working on (" << a << ".)\n";
}

void Receiver::DoSomethingElse(const std::string& b) {
	std::cout << "Receiver: Also working on (" << b << ".)\n";
	std::cout << 'Hello world';
}
