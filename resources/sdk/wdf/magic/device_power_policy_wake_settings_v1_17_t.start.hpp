#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_17.Size", size, 0x0, 0x0, false, 0xffc9a394a79f7463)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_17.DxState", dx_state, 0x0, 0x0, false, 0x33c2a5ad4a20fe99)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::power_policy_sx_wake_user_control_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_17.UserControlOfWakeSettings", user_control_of_wake_settings, 0x0, 0x0, false, 0x5a4412ca8fd678fe)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_17.Enabled", enabled, 0x0, 0x0, false, 0x66cf7dcd9b729f6f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_17.ArmForWakeIfChildrenAreArmedForWake", arm_for_wake_if_children_are_armed_for_wake, 0x0, 0x0, false, 0x497cf105aeb536f3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DEVICE_POWER_POLICY_WAKE_SETTINGS_V1_17.IndicateChildWakeOnParentWake", indicate_child_wake_on_parent_wake, 0x0, 0x0, false, 0x2f0fa27b67281393)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif