#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_15.Size", size, 0x0, 0x0, false, 0xf056be078aa1ac3b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_policy_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_15.Policy", policy, 0x0, 0x0, false, 0x978c1858eb21ceaf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::interrupt_priority_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_15.Priority", priority, 0x0, 0x0, false, 0x16c090a469b984b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_WDF_INTERRUPT_EXTENDED_POLICY_V1_15.TargetProcessorSetAndGroup", target_processor_set_and_group, 0x0, 0x0, false, 0x8fa625fbe4f8e142)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif