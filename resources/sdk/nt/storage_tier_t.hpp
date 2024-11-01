#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "storage_tier_class_t.hpp"
#include "storage_tier_media_type_t.hpp"

#include "magic/storage_tier_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_TIER]
    // => WDK 10 (NV)
    //
    struct storage_tier_t                                            
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 struct nt::guid_t                  id;                    //{ +0x0000    } | .Id
        _m01 sdk::array<wchar_t, 256>           name;                  //{ +0x0010    } | .Name
        _m02 sdk::array<wchar_t, 256>           description;           //{ +0x0210    } | .Description
        _m03 uint64_t                           flags;                 //{ +0x0410    } | .Flags
        _m04 uint64_t                           provisioned_capacity;  //{ +0x0418    } | .ProvisionedCapacity
        _m05 enum nt::storage_tier_media_type_t media_type;            //{ +0x0420    } | .MediaType
        _m06 enum nt::storage_tier_class_t      _class;                //{ +0x0424    } | .Class
                                                                     
        SDK_NONVOL_PROPERTIES( "_STORAGE_TIER.$", 0x0, false, 0xe234c277ecf19c46 );                     
        SDK_FIXED_SIZE( storage_tier_t, 0x428 );                     
    };                                                               
};
#include "magic/storage_tier_t.end.hpp"
SDK_VERIFY( struct nt::storage_tier_t, 0x428 );
