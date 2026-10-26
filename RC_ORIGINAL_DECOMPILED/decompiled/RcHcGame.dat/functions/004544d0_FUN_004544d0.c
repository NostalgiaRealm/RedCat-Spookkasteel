/*
 * FUN_004544d0 at 004544d0
 * undefined FUN_004544d0(void)
 * Address ranges: 004544d0-004545c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004544d0(int param_1)

{
  int iVar1;
  void **ppvVar2;
  char *pcVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062663e;
  iVar1 = *(int *)(param_1 + 8);
  ppvVar2 = &local_c;
  local_c = ExceptionList;
  for (iVar4 = *(int *)(param_1 + 4); ExceptionList = ppvVar2, iVar4 != iVar1; iVar4 = iVar4 + 0x50)
  {
    local_4 = 2;
    if (*(int *)(iVar4 + 0x30) != 0) {
      FUN_004098d0();
      *(undefined4 *)(iVar4 + 0x30) = 0;
    }
    local_4._0_1_ = 1;
    FUN_004040a0(1);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_004040a0(1);
    local_4 = 0xffffffff;
    if (*(int *)(iVar4 + 4) != 0) {
      pcVar3 = (char *)FUN_0043b090(*(int *)(iVar4 + 4));
      if ((*pcVar3 == '\0') ||
         (pcVar3 = (char *)FUN_0043b090(*(undefined4 *)(iVar4 + 4)), *pcVar3 == -1)) {
        FUN_00548d30(*(int *)(iVar4 + 4) + -1,*(int *)(iVar4 + 0xc) + 2);
      }
      else {
        pcVar3 = (char *)FUN_0043b090(*(undefined4 *)(iVar4 + 4));
        *pcVar3 = *pcVar3 + -1;
      }
    }
    *(undefined4 *)(iVar4 + 4) = 0;
    *(undefined4 *)(iVar4 + 8) = 0;
    *(undefined4 *)(iVar4 + 0xc) = 0;
    ppvVar2 = ExceptionList;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

