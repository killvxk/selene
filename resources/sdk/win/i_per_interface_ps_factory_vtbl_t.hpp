#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_per_interface_ps_factory_vtbl_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    struct i_rpc_stub_buffer_t;
    struct i_rpc_proxy_buffer_t;
    struct i_per_interface_ps_factory_t;

    // [struct IPerInterfacePSFactoryVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_per_interface_ps_factory_vtbl_t            
    {                                                   
        using query_interface_t =     sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, const struct nt::guid_t&, void**)>*;                    
        using add_ref_t =             sdk::function<uint32_t(struct win::i_per_interface_ps_factory_t*)>*;                    
        using release_t =             sdk::function<uint32_t(struct win::i_per_interface_ps_factory_t*)>*;                    
        using create_proxy_t =        sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, struct win::i_unknown_t*, const struct nt::guid_t&, struct win::i_rpc_proxy_buffer_t**, void**)>*;                    
        using create_stub_t =         sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, const struct nt::guid_t&, struct win::i_unknown_t*, struct win::i_rpc_stub_buffer_t**)>*;                    
        using get_method_property_t = sdk::function<sdk::hresult(struct win::i_per_interface_ps_factory_t*, uint16_t, uint32_t, uint64_t*)>*;                    
                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 query_interface_t      query_interface;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t              add_ref;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t              release;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 create_proxy_t         create_proxy;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CreateProxy
        _m04 create_stub_t          create_stub;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CreateStub
        _m05 get_method_property_t  get_method_property;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetMethodProperty
                                                        
        SDK_MAGIC_PROPERTIES( "IPerInterfacePSFactoryVtbl.$", 0x30, true, 0xcb9c5e074623f94e );                    
        SDK_FIXED_SIZE( i_per_interface_ps_factory_vtbl_t, 0x30 );                    
    };                                                  
};
#include "magic/i_per_interface_ps_factory_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_per_interface_ps_factory_vtbl_t, 0x30 );