/*
 * FUN_0052ba24 at 0052ba24
 * undefined __register FUN_0052ba24(int * param_1)
 * Address ranges: 0052ba24-0052baf8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0052ba24(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  char *pcStack_130;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_120 = &LAB_0052baf9;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1[0x20] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_130 = " Parameter cannot be nil";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    puVar1 = puStack_11c;
  }
  puStack_11c = puVar1;
  iVar2 = FUN_0045da14(local_8[0x20]);
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_10 = uVar3 + 1;
    local_c = 0;
    do {
      FUN_004e25a0((int *)local_8[0x20],local_c,0);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  *in_FS_OFFSET = pcStack_130;
  FUN_00403dd4(&local_18,2);
  return;
}

