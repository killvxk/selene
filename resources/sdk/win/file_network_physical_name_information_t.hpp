#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_network_physical_name_information_t.start.hpp"
namespace win
{
    // [struct _FILE_NETWORK_PHYSICAL_NAME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_network_physical_name_information_t  
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                           
        _m00 uint32_t               file_name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileNameLength
        _m01 sdk::array<wchar_t, 1> file_name;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FileName
                                                     
        SDK_NONVOL_PROPERTIES( "_FILE_NETWORK_PHYSICAL_NAME_INFORMATION.$", 0x8, true, 0xc8905a096d5056cb );                 
        SDK_FIXED_SIZE( file_network_physical_name_information_t, 0x8 );                 
    };                                               
};
#include "magic/file_network_physical_name_information_t.end.hpp"
SDK_VERIFY( struct win::file_network_physical_name_information_t, 0x8 );