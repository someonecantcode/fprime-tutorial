// ======================================================================
// \title  YourComponent.hpp
// \author teawsl
// \brief  hpp file for YourComponent component implementation class
// ======================================================================

#ifndef HiNamespace_YourComponent_HPP
#define HiNamespace_YourComponent_HPP

#include "HiNamespace/Components/YourComponent/YourComponentComponentAc.hpp"

namespace HiNamespace {

class YourComponent final : public YourComponentComponentBase {
  public:
    // ----------------------------------------------------------------------
    // Component construction and destruction
    // ----------------------------------------------------------------------

    //! Construct YourComponent object
    YourComponent(const char* const compName  //!< The component name
    );

    //! Destroy YourComponent object
    ~YourComponent();

  private:
    U32 m_holaCount = 0;
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command SAY_HOLA
    //!
    //! Command to issue greeting with maximum length of 20 characters
    void SAY_HOLA_cmdHandler(FwOpcodeType opCode,              //!< The opcode
                             U32 cmdSeq,                       //!< The command sequence number
                             const Fw::CmdStringArg& greeting  //!< Greeting to repeat in the SayHiEvent event
                             ) override;
};

}  // namespace HiNamespace

#endif
