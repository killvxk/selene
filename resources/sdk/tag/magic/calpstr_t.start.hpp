#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCALPSTR.cElems", c_elems, 0x0, 0x20, true, 0xc98332043bac8df4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char**), "tagCALPSTR.pElems", p_elems, 0x40, 0x40, true, 0xa258e5099859a19e)
#else
#define _m00
#define _m01
#endif