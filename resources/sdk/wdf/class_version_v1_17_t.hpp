#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_version_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDF_CLASS_VERSION_V1_17]
    // => Windows 10 v1607
    //
    struct class_version_v1_17_t
    {                           
        // Windows 10 v1607      
        //                  
        _m00 uint32_t major;      //{ +0x0000    } | .Major
        _m01 uint32_t minor;      //{ +0x0004    } | .Minor
        _m02 uint32_t build;      //{ +0x0008    } | .Build
                                
        SDK_MAGIC_PROPERTIES( "_WDF_CLASS_VERSION_V1_17.$", 0x0, false, 0xdd84a26329273f86 );      
        SDK_FIXED_SIZE( class_version_v1_17_t, 0xc );      
    };                          
};
#include "magic/class_version_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::class_version_v1_17_t, 0xc );