/*
 * FUN_00571860 at 00571860
 * undefined FUN_00571860(void)
 * Address ranges: 00571860-005718cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00571860(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00641128;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064f994;
  iVar1 = param_1[0x61];
  local_4 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x61] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

