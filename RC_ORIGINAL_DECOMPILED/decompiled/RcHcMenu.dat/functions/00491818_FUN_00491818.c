/*
 * FUN_00491818 at 00491818
 * undefined __register FUN_00491818(int param_1, int param_2, int * param_3)
 * Address ranges: 00491818-004918ed
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00491818(int param_1,int param_2,int *param_3)

{
  short *psVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_24;
  undefined4 *local_1c;
  int local_18;
  uint local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_1c = (undefined4 *)0x0;
  puStack_30 = &LAB_004918ee;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_00403db0((int *)&local_1c);
  psVar1 = (short *)FUN_00492148(local_8,local_c);
  uVar2 = (int)*psVar1 - 2;
  if (SBORROW4((int)*psVar1,2)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_24 = uVar2 + 1;
    local_14 = 0;
    do {
      uVar2 = local_14;
      if (9 < local_14) {
        uVar2 = thunk_FUN_00402874(local_14);
      }
      piVar3 = (int *)FUN_004923e0(local_8,(int)psVar1[uVar2 + 0xb]);
      local_18 = FUN_00403224(piVar3,(int)&PTR_FUN_004740c8);
      if (*(char *)(local_18 + 0x38) == '\0') {
        FUN_00404038((int *)&local_1c,*(undefined4 **)(local_18 + 0x34));
      }
      else {
        FUN_00403db0((int *)&local_1c);
      }
      local_14 = local_14 + 1;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  FUN_0040407c(local_10,local_1c,*(undefined4 **)(*(int *)(psVar1 + 0x20) + 0x1c));
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_004918f5;
  puStack_30 = (undefined1 *)0x4918ed;
  FUN_00403db0((int *)&local_1c);
  return;
}

