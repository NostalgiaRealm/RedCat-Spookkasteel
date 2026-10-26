/*
 * FUN_0049e2d0 at 0049e2d0
 * undefined FUN_0049e2d0(void)
 * Address ranges: 0049e2d0-0049e305
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 22 for .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bb14 slot 22 for
   .?AVCRcAnyActor@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_0049e2d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(char *)(param_1 + 0x200) != '\0') {
    uStack_4 = 0x3e99999a;
    uStack_8 = 0x3dcccccd;
    uStack_c = param_3;
    iStack_10 = param_1;
    FUN_004042e0(&iStack_10);
    FUN_00591940(param_2);
  }
  return;
}

