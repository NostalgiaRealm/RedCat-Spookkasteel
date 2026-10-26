/*
 * FUN_004e27a4 at 004e27a4
 * undefined __register FUN_004e27a4(int * param_1, int param_2, undefined4 * param_3)
 * Address ranges: 004e27a4-004e2866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e27a4(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  char *pcStack_134;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_124 = &LAB_004e2867;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  uVar1 = FUN_004e28e0((int)param_1,*(byte *)(param_3 + 1));
  if ((char)uVar1 == '\0') {
    FUN_00402fe0(*local_8,local_118);
    FUN_00403fd4(&local_18,local_118);
    pcStack_134 = "State is not allowed in this array";
    FUN_004040f0(&local_14,3);
    FUN_00403d94(local_14);
  }
  FUN_0045d6f4(local_8,local_c);
  puVar2 = (undefined4 *)FUN_004e24f8(local_8,local_c);
  *puVar2 = *local_10;
  puVar2[1] = local_10[1];
  *in_FS_OFFSET = pcStack_134;
  FUN_00403dd4(&local_18,2);
  return;
}

