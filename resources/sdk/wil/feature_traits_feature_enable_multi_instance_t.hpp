#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_EnableMultiInstance]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct feature_traits_feature_enable_multi_instance_t
    {                                                    
                                                         
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_EnableMultiInstance.$", 0x1, true, 0x9085e5984f4994ae );
        SDK_FIXED_SIZE( feature_traits_feature_enable_multi_instance_t, 0x1 );
    };                                                   
};
SDK_VERIFY( struct wil::feature_traits_feature_enable_multi_instance_t, 0x1 );