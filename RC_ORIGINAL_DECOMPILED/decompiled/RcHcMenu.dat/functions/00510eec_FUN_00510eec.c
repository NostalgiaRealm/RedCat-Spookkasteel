/*
 * FUN_00510eec at 00510eec
 * undefined __register FUN_00510eec(int * param_1, int param_2)
 * Address ranges: 00510eec-00510f9d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00510eec(int *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_12c;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  uVar2 = 0;
  local_10 = 0;
  local_14 = 0;
  puStack_11c = &LAB_00510f9e;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (4 < param_2) {
    FUN_00402fe0(*param_1,local_114);
    FUN_00403fd4(&local_14,local_114);
    pcStack_12c = "Currency cannot have more than 4 decimals.";
    FUN_004040f0(&local_10,3);
    FUN_00403d94(local_10);
    uVar2 = extraout_ECX;
    puVar1 = puStack_118;
  }
  puStack_118 = puVar1;
  if (local_8[0x9f] != local_c) {
    local_8[0x9f] = local_c;
    FUN_005112f0(local_8,local_8,uVar2);
  }
  *in_FS_OFFSET = pcStack_12c;
  FUN_00403dd4(&local_14,2);
  return;
}

