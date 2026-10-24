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

void YourComponent ::TODO_cmdHandler(FwOpcodeType opCode, U32 cmdSeq) {
    // TODO
    this->cmdResponse_out(opCode, cmdSeq, Fw::CmdResponse::OK);
}

}  // namespace HiNamespace
