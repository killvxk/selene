#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoDeviceControl.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0x3bbe265518cadc9e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "FxIoQueueIoDeviceControl.Method", method, 0x40, 0x40, true, 0xa3a4bc6eace9cd66)
#else
#define _m00
#define _m01
#endif