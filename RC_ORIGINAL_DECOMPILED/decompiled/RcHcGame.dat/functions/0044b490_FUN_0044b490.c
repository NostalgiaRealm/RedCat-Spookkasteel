/*
 * FUN_0044b490 at 0044b490
 * undefined FUN_0044b490(void)
 * Address ranges: 0044b490-0044b5cd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0044b490(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062570a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064d03c;
  local_4 = 3;
  FUN_0044be40();
  iVar1 = param_1[0x71];
  iVar2 = param_1[0x70];
  local_4._0_1_ = 2;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 4) {
    FUN_0057d310();
  }
  FUN_005fe5f0(param_1[0x70]);
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  iVar1 = param_1[0x6d];
  iVar2 = param_1[0x6c];
  local_4._0_1_ = 1;
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x10) {
    FUN_004040a0(1);
  }
  FUN_005fe5f0(param_1[0x6c]);
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  iVar1 = param_1[0x66];
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x66] = 0;
  }
  *param_1 = &PTR_FUN_0064c50c;
  local_4 = 4;
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

