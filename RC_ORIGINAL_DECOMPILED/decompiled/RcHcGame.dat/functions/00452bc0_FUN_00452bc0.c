/*
 * FUN_00452bc0 at 00452bc0
 * undefined FUN_00452bc0(void)
 * Address ranges: 00452bc0-00452c57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00452bc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0062640e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0064d330;
  iVar1 = param_1[0x18];
  local_4 = 2;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x18] = 0;
  }
  iVar1 = param_1[0x17];
  local_4._0_1_ = 1;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x14) + -1;
    *(int *)(iVar1 + 0x14) = iVar2;
    if (iVar2 == 0) {
      FUN_005abfc0(0);
    }
    param_1[0x17] = 0;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004545d0();
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

