#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw14_feature_host_memory_buffer_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW14_FEATURE_HOST_MEMORY_BUFFER]
    // => Windows 11
    //
    union nvme_cdw14_feature_host_memory_buffer_t
    {                                            
        // Windows 11          
        //                     
        _m00 uint32_t hmdlua;                      //{ +0x0000    } | .HMDLUA
        _m01 uint32_t as_ulong;                    //{ +0x0000    } | .AsUlong
                                                 
        SDK_MAGIC_PROPERTIES( "NVME_CDW14_FEATURE_HOST_MEMORY_BUFFER.$", 0x0, false, 0xaaa6342de8283ef1 );         
        SDK_FIXED_SIZE( nvme_cdw14_feature_host_memory_buffer_t, 0x4 );         
    };                                           
};
#include "magic/nvme_cdw14_feature_host_memory_buffer_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw14_feature_host_memory_buffer_t, 0x4 );