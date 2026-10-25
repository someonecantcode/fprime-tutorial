// ======================================================================
// \title  YourComponent.cpp
// \author teawsl
// \brief  cpp file for YourComponent component implementation class
// ======================================================================

#include "HiNamespace/Components/YourComponent/YourComponent.hpp"

namespace HiNamespace {

// ----------------------------------------------------------------------
// Component construction and destruction
// ----------------------------------------------------------------------

YourComponent ::YourComponent(const char* const compName) : YourComponentComponentBase(compName) {}

YourComponent ::~YourComponent() {}

// ----------------------------------------------------------------------
// Handler implementations for commands
// ----------------------------------------------------------------------

void YourComponent ::SAY_HOLA_cmdHandler(FwOpcodeType opCode, U32 cmdSeq, const Fw::CmdStringArg& greeting) {
    // Copy the command string input into an event string for the SayHiEvent event
    Fw::LogStringArg eventGreeting(greeting.toChar());
    // Emit the SayHiEvent event with the copied string
    this->log_ACTIVITY_HI_SayHolaEvent(eventGreeting);

    this->tlmWrite_HolaCount(++this->m_holaCount);

    // Tell the fprime command system that we have completed the processing of the supplied command with OK status
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HiNamespace
