/*
 * FUN_004696d0 at 004696d0
 * undefined __register FUN_004696d0(int param_1)
 * Address ranges: 004696d0-004697a1;004697cc-004697f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004696d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  ULONG *in_FS_OFFSET;
  ULONG UStack_34;
  undefined1 *puStack_30;
  _union_2683 local_2c;
  undefined4 local_1c [3];
  
  local_1c[2] = &stack0xfffffffc;
  iVar2 = 5;
  do {
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  local_1c[1] = &LAB_004697f6;
  local_1c[0] = *in_FS_OFFSET;
  *in_FS_OFFSET = (ULONG)local_1c;
  if (*(int *)(param_1 + 0x58) != 0) {
    local_2c._12_4_ = 0x469700;
    local_1c[2] = &stack0xfffffffc;
    FUN_004714b4(*(int *)(param_1 + 0x58));
    local_2c._12_4_ = 0x46970c;
    FUN_0046a0bc(param_1,'\x01');
    piVar1 = *(int **)(param_1 + 0x58);
    local_2c._8_4_ = &LAB_004697c5;
    local_2c.decVal.Hi32 = *in_FS_OFFSET;
    *in_FS_OFFSET = (ULONG)&local_2c.n2.wReserved2;
    local_2c._0_4_ = 0x469727;
    local_2c._12_4_ = &stack0xfffffffc;
    iVar2 = FUN_00469460(param_1,extraout_EDX,extraout_ECX);
    local_2c._0_4_ = 0x46972c;
    FUN_00467ff0(iVar2);
    local_2c._0_4_ = 0x469734;
    FUN_00472928((int)piVar1);
    puStack_30 = &LAB_004697a2;
    UStack_34 = *in_FS_OFFSET;
    *in_FS_OFFSET = (ULONG)&UStack_34;
    local_2c._0_4_ = &stack0xfffffffc;
    FUN_00473334(piVar1);
    while (*(char *)((int)piVar1 + 0x91) == '\0') {
      FUN_00471f68((int)piVar1,*(char **)(param_1 + 100),(VARIANTARG *)local_1c);
      FUN_00471f68((int)piVar1,*(char **)(param_1 + 0x60),(VARIANTARG *)&local_2c.n2);
      FUN_00467fb0(*(int *)(param_1 + 0x6c),(VARIANTARG *)&local_2c.n2,(VARIANTARG *)local_1c);
      FUN_00473600(piVar1);
    }
    *in_FS_OFFSET = UStack_34;
    local_2c._0_4_ = &LAB_004697a9;
    puStack_30 = (undefined1 *)0x4697a1;
    FUN_00472948(piVar1);
    return;
  }
  local_2c._12_4_ = 0x4697d5;
  FUN_0046a0bc(param_1,'\0');
  *in_FS_OFFSET = local_1c[0];
  local_1c[2] = &LAB_004697fd;
  local_1c[1] = 0x4697f5;
  FUN_00404878((VARIANTARG *)&local_2c.n2,&DAT_00401108,2);
  return;
}

