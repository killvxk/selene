#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_log_diag_event_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_LOG_DIAG_EVENT_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_log_diag_event_args_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 void*    trace_context;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceContext
        _m01 void*    context_event;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ContextEvent
        _m02 uint32_t result;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .result
                                     
        SDK_MAGIC_PROPERTIES( "_STOR_LOG_DIAG_EVENT_ARGS.$", 0x18, true, 0xc6bf16b2d5869e2e );              
        SDK_FIXED_SIZE( stor_log_diag_event_args_t, 0x18 );              
    };                               
};
#include "magic/stor_log_diag_event_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_log_diag_event_args_t, 0x18 );