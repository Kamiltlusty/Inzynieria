#include "ComplexCommand.h"

void ComplexCommand::Execute() const {
	std::cout << "ComplexCommand: Complex stuff should be done by a receiver object.\n";
	this->receiver_->DoSomething(this->a_);
	this->receiver_->DoSomethingElse(this->b_);
}
