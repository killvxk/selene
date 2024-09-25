#pragma once
#include <sdkgen/support_library.hpp>

namespace sdb
{
    // [enum _SDB_RUN_PLATFORM]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class run_platform_t : int32_t
    {                                  
        x86 =         0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        amd64 =       0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        x86_amd64 =   0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm32 =       0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm64 =       0x4,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        x86_arm64 =   0x5,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        arm32_arm64 = 0x6,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        amd64_arm64 = 0x7,               // Windows 11
        max =         0x7,               // Windows 10 v2004, Windows 10 v20H2
        //max =       0x8,               // Windows 11
    };                                 
};