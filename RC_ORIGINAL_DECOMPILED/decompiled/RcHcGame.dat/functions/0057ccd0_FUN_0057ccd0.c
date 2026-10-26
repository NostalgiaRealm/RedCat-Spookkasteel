/*
 * FUN_0057ccd0 at 0057ccd0
 * undefined FUN_0057ccd0(void)
 * Address ranges: 0057ccd0-0057cd61
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fbc8 slot 13 for .?AVCAdamEffectFog@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64fbc8 slot 13 for
   .?AVCAdamEffectFog@@. Original bytes unchanged; names and types still inferred. */

void FUN_0057ccd0(int param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00641ff0;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    FUN_0057c960();
  }
  if (param_2 != 0) {
    FUN_0057c6a0();
    FUN_0057c850();
  }
  local_4 = local_4 & 0xffffff00;
  if ((param_1 != 0) &&
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  local_4 = 0xffffffff;
  if ((param_2 != 0) &&
     (iVar1 = *(int *)(param_2 + 0x14) + -1, *(int *)(param_2 + 0x14) = iVar1, iVar1 == 0)) {
    FUN_005abfc0(0);
  }
  ExceptionList = local_c;
  return;
}

