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
    // ----------------------------------------------------------------------
    // Handler implementations for commands
    // ----------------------------------------------------------------------

    //! Handler implementation for command TODO
    //!
    //! TODO
    void TODO_cmdHandler(FwOpcodeType opCode,  //!< The opcode
                         U32 cmdSeq            //!< The command sequence number
                         ) override;
};

}  // namespace HiNamespace

#endif
