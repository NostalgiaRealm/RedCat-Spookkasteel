/*
 * FUN_004747d8 at 004747d8
 * undefined __register FUN_004747d8(int * param_1, undefined4 param_2, int * param_3)
 * Address ranges: 004747d8-00474863
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004747d8(int *param_1,undefined4 param_2,int *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  byte local_118 [256];
  int local_18;
  int local_14;
  undefined4 local_10;
  int *local_c;
  int *local_8;
  
  puStack_120 = &stack0xfffffffc;
  local_14 = 0;
  local_18 = 0;
  puStack_124 = &LAB_00474864;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  local_10 = param_2;
  local_c = param_3;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_118);
  FUN_00403fd4(&local_18,local_118);
  FUN_004040f0(&local_14,3);
  FUN_00459bd4(local_14);
  FUN_00403db0(local_c);
  *in_FS_OFFSET = "Not supported";
  FUN_00403dd4(&local_18,2);
  return;
}

