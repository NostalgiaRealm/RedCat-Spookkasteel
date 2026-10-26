/*
 * FUN_00418420 at 00418420
 * undefined FUN_00418420(void)
 * Address ranges: 00418420-0041843a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b488 slot 34 for .?AVCRcTouchSpider@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b488 slot 34 for
   .?AVCRcTouchSpider@@. Original bytes unchanged; names and types still inferred. */

int FUN_00418420(int param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)(param_1 + -1) >> 8);
  switch(param_1 + -1) {
  case 0:
  case 1:
  case 3:
  case 4:
  case 5:
    return CONCAT31(uVar1,1);
  default:
    return (uint)uVar1 << 8;
  }
}

