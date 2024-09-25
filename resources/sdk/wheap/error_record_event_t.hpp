#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

namespace whea { struct error_record_t; }

#include "magic/error_record_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_ERROR_RECORD_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_record_event_t                                  
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 struct whea::error_record_t*   record;                //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Record
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_ERROR_RECORD_EVENT.$", 0x28, true, 0xaed07f09d1e2ff60 );                     
        SDK_FIXED_SIZE( error_record_event_t, 0x28 );                     
    };                                                           
};
#include "magic/error_record_event_t.end.hpp"
SDK_VERIFY( struct wheap::error_record_event_t, 0x28 );