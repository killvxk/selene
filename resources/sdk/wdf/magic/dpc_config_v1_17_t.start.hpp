#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DPC_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x4ecbb5233a27a96b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdpc_t*)>*), "_WDF_DPC_CONFIG_V1_17.EvtDpcFunc", evt_dpc_func, 0x0, 0x0, false, 0xd0ced4c09092639)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_DPC_CONFIG_V1_17.AutomaticSerialization", automatic_serialization, 0x0, 0x0, false, 0x6e57ec1860ca479f)
#else
#define _m00
#define _m01
#define _m02
#endif