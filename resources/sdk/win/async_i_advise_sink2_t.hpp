#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct AsyncIAdviseSink2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_advise_sink2_t
    {                            
                                 
        SDK_MAGIC_PROPERTIES( "AsyncIAdviseSink2.$", 0x8, true, 0x45328db8baa8ba20 );
        SDK_FIXED_SIZE( async_i_advise_sink2_t, 0x8 );
    };                           
};
SDK_VERIFY( struct win::async_i_advise_sink2_t, 0x8 );
