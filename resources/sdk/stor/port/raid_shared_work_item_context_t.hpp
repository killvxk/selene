#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct workitem_t; }
namespace nt { struct irp_t;      }

#include "magic/raid_shared_work_item_context_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_SHARED_WORK_ITEM_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_shared_work_item_context_t    
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct io::workitem_t* work_item;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
        _m01 struct nt::irp_t*      irp;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 uint32_t               in_use;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InUse
                                              
        SDK_MAGIC_PROPERTIES( "_RAID_SHARED_WORK_ITEM_CONTEXT.$", 0x18, true, 0x2cd4ad07478664a6 );          
        SDK_FIXED_SIZE( raid_shared_work_item_context_t, 0x18 );          
    };                                        
};
#include "magic/raid_shared_work_item_context_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_shared_work_item_context_t, 0x18 );