#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxIoTargetRemoteOpenState]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_target_remote_open_state_t : int32_t
    {                                                 
        closed =  0x1,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        opening = 0x2,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        open =    0x3,                                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
