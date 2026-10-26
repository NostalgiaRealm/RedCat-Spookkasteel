/*
 * FUN_004ef420 at 004ef420
 * undefined FUN_004ef420(void)
 * Address ranges: 004ef420-004ef45f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f3d0 slot 4 for .?AVCAdamTextCharacter@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64f3d0 slot 4 for
   .?AVCAdamTextCharacter@@. Original bytes unchanged; names and types still inferred. */

float10 __fastcall FUN_004ef420(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006c8de0 == 0) {
    FUN_0055b280();
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_004b26a0();
  return (float10)(iVar1 - iVar2) / (float10)iVar3;
}

