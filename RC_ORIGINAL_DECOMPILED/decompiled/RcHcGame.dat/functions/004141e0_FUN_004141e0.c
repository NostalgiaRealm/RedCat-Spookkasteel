/*
 * FUN_004141e0 at 004141e0
 * undefined FUN_004141e0(void)
 * Address ranges: 004141e0-004141fa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b10c slot 34 for .?AVCRcShootSpider@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b10c slot 34 for
   .?AVCRcShootSpider@@. Original bytes unchanged; names and types still inferred. */

int FUN_004141e0(int param_1)

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

