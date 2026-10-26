/*
 * FUN_00439920 at 00439920
 * undefined FUN_00439920(void)
 * Address ranges: 00439920-00439a06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00439920(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00624190;
  local_c = ExceptionList;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  FUN_005ae5f0(s___AdamSource_DaviSortedList_h_00690798,0x2d);
  FUN_005ae770();
  iVar1 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0x20);
  local_4 = (uint)local_4._1_3_ << 8;
  for (; iVar3 != iVar1; iVar3 = iVar3 + 0x10) {
    if (*(int *)(iVar3 + 4) != 0) {
      pcVar2 = (char *)FUN_0043b090(*(int *)(iVar3 + 4));
      if ((*pcVar2 == '\0') ||
         (pcVar2 = (char *)FUN_0043b090(*(undefined4 *)(iVar3 + 4)), *pcVar2 == -1)) {
        FUN_00548d30(*(int *)(iVar3 + 4) + -1,*(int *)(iVar3 + 0xc) + 2);
      }
      else {
        pcVar2 = (char *)FUN_0043b090(*(undefined4 *)(iVar3 + 4));
        *pcVar2 = *pcVar2 + -1;
      }
    }
    *(undefined4 *)(iVar3 + 4) = 0;
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined4 *)(iVar3 + 0xc) = 0;
  }
  FUN_005fe5f0(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  local_4 = 0xffffffff;
  FUN_005ab4d0();
  ExceptionList = local_c;
  return;
}

