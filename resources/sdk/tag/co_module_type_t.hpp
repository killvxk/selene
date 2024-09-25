#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagCoModuleType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class co_module_type_t : int32_t
    {                                    
        module_unknown = 0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_32bit =   0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        module_64bit =   0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};