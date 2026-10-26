/*
 * FUN_00419b30 at 00419b30
 * undefined FUN_00419b30(void)
 * Address ranges: 00419b30-00419b4a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b630 slot 34 for .?AVCRcBoneBrutus@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64b630 slot 34 for
   .?AVCRcBoneBrutus@@. Original bytes unchanged; names and types still inferred. */

int FUN_00419b30(int param_1)

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

