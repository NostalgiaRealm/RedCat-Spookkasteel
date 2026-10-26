/*
 * FUN_004ee70c at 004ee70c
 * undefined __register FUN_004ee70c(int param_1, int param_2, int * param_3, int param_4)
 * Address ranges: 004ee70c-004ee8b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ee70c(int param_1,int param_2,int *param_3,int param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_15c;
  undefined1 *puStack_158;
  undefined1 *puStack_154;
  _union_2683 local_14c;
  int *local_13c;
  undefined1 local_138;
  int local_134;
  undefined1 local_130;
  _union_2683 *local_12c;
  undefined1 local_128;
  int *local_124;
  undefined1 local_120;
  undefined4 local_11c;
  undefined1 local_118;
  byte local_114 [256];
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_154 = &stack0xfffffffc;
  local_14c._0_4_ = 0;
  local_14c.decVal.Hi32 = 0;
  local_14c._8_4_ = 0;
  local_14c._12_4_ = 0;
  local_14 = 0;
  puStack_158 = &LAB_004ee8ba;
  uStack_15c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_15c;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_3 == (int *)0x0) {
    FUN_00402fe0(**(int **)(param_4 + -4),local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".AddWhereLineCondition: par-error");
    FUN_00403d94(local_14);
    puVar1 = puStack_154;
  }
  puStack_154 = puVar1;
  cVar2 = (**(code **)(*local_10 + 0x4c))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*local_10 + 0x50))();
    if (cVar2 == '\0') {
      local_13c = local_10;
      local_138 = 7;
      local_134 = local_c;
      local_130 = 7;
      FUN_00496550(local_10,(VARIANT *)&local_14c.n2);
      local_12c = &local_14c;
      local_128 = 0xd;
      FUN_004b4e04(local_8,&local_13c,2);
      goto LAB_004ee899;
    }
  }
  if (((*(int *)PTR_DAT_0057260c == local_c) || (*(int *)PTR_DAT_00572070 == local_c)) ||
     (*(int *)PTR_DAT_005720f0 == local_c)) {
    local_124 = local_10;
    local_120 = 7;
    local_11c = *(undefined4 *)PTR_DAT_0057252c;
    local_118 = 7;
    FUN_004b4e04(local_8,&local_124,1);
  }
  else {
    local_124 = local_10;
    local_120 = 7;
    local_11c = *(undefined4 *)PTR_DAT_00572130;
    local_118 = 7;
    FUN_004b4e04(local_8,&local_124,1);
  }
LAB_004ee899:
  *in_FS_OFFSET = uStack_15c;
  puStack_154 = &LAB_004ee8c1;
  puStack_158 = (undefined1 *)0x4ee8b1;
  FUN_00405bcc((VARIANTARG *)&local_14c.n2);
  puStack_158 = (undefined1 *)0x4ee8b9;
  FUN_00403db0(&local_14);
  return;
}

