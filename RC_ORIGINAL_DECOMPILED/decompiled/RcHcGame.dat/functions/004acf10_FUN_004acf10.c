/*
 * FUN_004acf10 at 004acf10
 * undefined FUN_004acf10(void)
 * Address ranges: 004acf10-004acf9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004acf10(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062e1e0;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004ad270();
  *param_1 = &PTR_FUN_0064c50c;
  local_4 = 1;
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

