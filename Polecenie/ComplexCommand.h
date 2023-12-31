#pragma once
#include "Command.h"
#include "Receiver.h"
/**
 * However, some commands can delegate more complex operations to other objects,
 * called "receivers."
 */
class ComplexCommand : public Command {
    /**
     * @var Receiver
     */
private:
    Receiver* receiver_;
    /**
     * Context data, required for launching the receiver's methods.
     */
    std::string a_;
    std::string b_;
    /**
     * Complex commands can accept one or several receiver objects along with any
     * context data via the constructor.
     */
public:
    ComplexCommand(Receiver* receiver, std::string a, std::string b) : receiver_(receiver), a_(a), b_(b) {}
    /**
     * Commands can delegate to any methods of a receiver.
     */
    void Execute() const override;
};