#include "Invoker.h"
#include "Receiver.h"
#include "SimpleCommand.h"
#include "ComplexCommand.h"
#include "iostream"
using namespace std;
/**
 * The client code can parameterize an invoker with any commands.
 */

int main() {
	Invoker* invoker = new Invoker;
	invoker->SetOnStart(new SimpleCommand("Say Hi!"));
	Receiver* receiver = new Receiver;
	invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
	invoker->DoSomethingImportant();

	delete invoker;
	delete receiver;

	cout << "Inzynieria";

	return 0;
}