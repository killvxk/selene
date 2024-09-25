#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_combine_information_t.start.hpp"
namespace win
{
    // [struct _MEMORY_COMBINE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct memory_combine_information_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 void*    handle;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 uint64_t pages_combined;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagesCombined
                                       
        SDK_MAGIC_PROPERTIES( "_MEMORY_COMBINE_INFORMATION.$", 0x10, true, 0x9b31eaec159fcb7a );               
        SDK_FIXED_SIZE( memory_combine_information_t, 0x10 );               
    };                                 
};
#include "magic/memory_combine_information_t.end.hpp"
SDK_VERIFY( struct win::memory_combine_information_t, 0x10 );