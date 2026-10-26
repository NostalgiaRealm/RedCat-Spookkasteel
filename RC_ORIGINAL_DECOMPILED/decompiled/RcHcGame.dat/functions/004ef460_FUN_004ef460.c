/*
 * FUN_004ef460 at 004ef460
 * undefined FUN_004ef460(void)
 * Address ranges: 004ef460-004ef49f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f3d0 slot 6 for .?AVCAdamTextCharacter@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f3d0 slot 6 for
   .?AVCAdamTextCharacter@@. Original bytes unchanged; names and types still inferred. */

float10 __fastcall FUN_004ef460(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = FUN_004b27a0();
  return (float10)(iVar1 - iVar2) / (float10)iVar3;
}

