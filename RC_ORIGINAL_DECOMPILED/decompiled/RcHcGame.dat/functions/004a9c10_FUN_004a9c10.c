/*
 * FUN_004a9c10 at 004a9c10
 * undefined FUN_004a9c10(void)
 * Address ranges: 004a9c10-004a9d3d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004a9c10(int param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062de83;
  iVar1 = *(int *)(param_1 + 8);
  local_c = ExceptionList;
  ExceptionList = &local_c;
  for (iVar3 = *(int *)(param_1 + 4); iVar3 != iVar1; iVar3 = iVar3 + 0x30) {
    local_4 = 1;
    FUN_004040a0(1);
    local_4 = local_4 & 0xffffff00;
    if (*(int *)(iVar3 + 0x14) != 0) {
      pcVar2 = (char *)FUN_0043b090(*(int *)(iVar3 + 0x14));
      if ((*pcVar2 == '\0') ||
         (pcVar2 = (char *)FUN_0043b090(*(undefined4 *)(iVar3 + 0x14)), *pcVar2 == -1)) {
        FUN_00548d30(*(int *)(iVar3 + 0x14) + -1,*(int *)(iVar3 + 0x1c) + 2);
      }
      else {
        pcVar2 = (char *)FUN_0043b090(*(undefined4 *)(iVar3 + 0x14));
        *pcVar2 = *pcVar2 + -1;
      }
    }
    *(undefined4 *)(iVar3 + 0x14) = 0;
    *(undefined4 *)(iVar3 + 0x18) = 0;
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    local_4 = 0xffffffff;
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
  FUN_005fe5f0(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  ExceptionList = local_c;
  return;
}

