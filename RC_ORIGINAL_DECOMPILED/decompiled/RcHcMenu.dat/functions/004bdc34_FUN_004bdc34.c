/*
 * FUN_004bdc34 at 004bdc34
 * undefined __register FUN_004bdc34(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004bdc34-004bdd74
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004bdc34(int *param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *extraout_ECX;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  char *pcStack_13c;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_120;
  int local_11c;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c = 0;
  local_120 = 0;
  local_14 = 0;
  local_18 = 0;
  puStack_12c = &LAB_004bdd75;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  puVar1 = &stack0xfffffffc;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  if (param_1[0xd] == 0) {
    FUN_00402fe0(*param_1,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_13c = "No recordset.";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
    puVar1 = puStack_128;
  }
  puStack_128 = puVar1;
  if (local_8[10] == 0) {
    FUN_004bda6c(local_8,param_2,param_3);
  }
  if (-1 < local_c) {
    iVar2 = FUN_0048ec24(local_8[10]);
    if (local_c < iVar2) goto LAB_004bdd39;
  }
  FUN_00402fe0(*local_8,local_118);
  FUN_00403fd4(&local_120,local_118);
  FUN_004040f0(&local_11c,3);
  FUN_00403d94(local_11c);
LAB_004bdd39:
  FUN_0048f02c((int *)local_8[10],local_c,local_10);
  *in_FS_OFFSET = pcStack_13c;
  FUN_00403dd4(&local_120,2);
  FUN_00403dd4(&local_18,2);
  return;
}

