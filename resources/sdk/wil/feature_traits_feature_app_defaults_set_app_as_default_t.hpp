#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WilFeatureTraits_Feature_AppDefaultsSetAppAsDefault]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct feature_traits_feature_app_defaults_set_app_as_default_t
    {                                                              
                                                                   
        SDK_MAGIC_PROPERTIES( "__WilFeatureTraits_Feature_AppDefaultsSetAppAsDefault.$", 0x1, true, 0xb0762277f1915d5e );
        SDK_FIXED_SIZE( feature_traits_feature_app_defaults_set_app_as_default_t, 0x1 );
    };                                                             
};
SDK_VERIFY( struct wil::feature_traits_feature_app_defaults_set_app_as_default_t, 0x1 );