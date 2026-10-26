/*
 * FUN_005b21c0 at 005b21c0
 * undefined FUN_005b21c0(void)
 * Address ranges: 005b21c0-005b2227
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005b21c0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00646298;
  local_c = ExceptionList;
  iVar1 = param_1[7];
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    ExceptionList = &local_c;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[7] = 0;
  }
  local_4 = 0xffffffff;
  *param_1 = &PTR_FUN_0064e794;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

