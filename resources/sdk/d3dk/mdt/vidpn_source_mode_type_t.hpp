#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt
{
    // [enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class vidpn_source_mode_type_t : int32_t
    {                                            
        uninitialized =                 0x0,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        graphics =                      0x1,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        text =                          0x2,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        graphics_stereo =               0x3,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        graphics_stereo_advanced_scan = 0x4,       // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};