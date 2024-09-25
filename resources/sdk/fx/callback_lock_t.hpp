#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct kthread_t; }

#include "magic/callback_lock_t.start.hpp"
namespace fx
{
    class verifier_lock_t;
    struct driver_globals_t;

    // [class FxCallbackLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class callback_lock_t                                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                  
        _m00 struct fx::driver_globals_t* m_globals;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Globals
        _m01 struct nt::kthread_t*        m_owner_thread;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_OwnerThread
        _m02 uint32_t                     m_recursion_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_RecursionCount
        _m03 class fx::verifier_lock_t*   m_verifier;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_Verifier
        _m04 uint8_t                      m_previous_irql;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_PreviousIrql
                                                            
        SDK_MAGIC_PROPERTIES( "FxCallbackLock.$", 0x30, true, 0x3d7a02bd71d21e2 );                  
        SDK_FIXED_SIZE( callback_lock_t, 0x30 );                  
    };                                                      
};
#include "magic/callback_lock_t.end.hpp"
SDK_VERIFY( class fx::callback_lock_t, 0x30 );