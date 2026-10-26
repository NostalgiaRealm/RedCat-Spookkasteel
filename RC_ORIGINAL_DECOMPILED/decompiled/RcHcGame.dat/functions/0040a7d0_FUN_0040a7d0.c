/*
 * FUN_0040a7d0 at 0040a7d0
 * undefined FUN_0040a7d0(void)
 * Address ranges: 0040a7d0-0040a81a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a284 slot 6 for .?AVCRcBoneBrutusMainState@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a284 slot 6 for
   .?AVCRcBoneBrutusMainState@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_0040a7d0(int param_1)

{
  char cVar1;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  puStack_10 = (undefined1 *)0x3;
  uStack_14 = 0x40a7dd;
  FUN_00402a10();
  uStack_c = 0x7f7fffff;
  puStack_10 = (undefined1 *)0x1;
  uStack_14 = 1;
  uStack_18 = 0x40a7f1;
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x8c))();
  uStack_18 = 0x40a7f9;
  cVar1 = FUN_004233d0();
  if (cVar1 != '\0') {
    uStack_18 = 1;
    puStack_10 = auStack_1c;
    FUN_00457240(0);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x94))();
  }
  return;
}

