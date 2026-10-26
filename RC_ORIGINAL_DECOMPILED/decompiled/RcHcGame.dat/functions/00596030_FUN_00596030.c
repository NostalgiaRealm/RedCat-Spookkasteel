/*
 * FUN_00596030 at 00596030
 * undefined FUN_00596030(void)
 * Address ranges: 00596030-00596057
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 25 for .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64bc08 slot 25 for
   .?AVCRcCursorActor@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00596030(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [24];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x7c))(local_18);
  piVar3 = param_1 + 0x4d;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

