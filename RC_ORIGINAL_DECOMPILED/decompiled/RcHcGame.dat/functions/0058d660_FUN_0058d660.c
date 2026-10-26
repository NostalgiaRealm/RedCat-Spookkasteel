/*
 * FUN_0058d660 at 0058d660
 * undefined FUN_0058d660(void)
 * Address ranges: 0058d660-0058d702
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0058d660(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00643198;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064fe24;
  local_4 = 0;
  FUN_0058ef30(0);
  local_4 = 1;
  FUN_004ad270();
  *param_1 = &PTR_FUN_0064c50c;
  local_4 = 2;
  DAT_006b93cc = DAT_006b93cc + -1;
  iVar1 = param_1[0x4f];
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x4f] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00501f40();
  ExceptionList = local_c;
  return;
}

