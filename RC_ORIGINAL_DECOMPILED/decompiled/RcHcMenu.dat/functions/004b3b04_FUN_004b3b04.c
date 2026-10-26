/*
 * FUN_004b3b04 at 004b3b04
 * undefined __register FUN_004b3b04(int param_1, undefined4 * param_2, int * param_3)
 * Address ranges: 004b3b04-004b3baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b3b04(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  byte local_30 [28];
  undefined4 *local_14;
  uint *local_10;
  int *local_c;
  int local_8;
  
  local_10 = (uint *)0x0;
  local_14 = (undefined4 *)0x0;
  pbVar2 = local_30;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pbVar2 = *param_2;
    param_2 = param_2 + 1;
    pbVar2 = pbVar2 + 4;
  }
  pbVar2 = (byte *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffb8;
  local_c = param_3;
  local_8 = param_1;
  FUN_00490f08(*(int **)(param_1 + 0x1c),local_30,(int *)&local_10);
  FUN_00491170(*(int **)(local_8 + 0x1c),local_30,(int *)&local_14);
  iVar1 = (**(code **)(**(int **)(local_8 + 0x48) + 0x50))(*(int **)(local_8 + 0x48),local_14);
  if (iVar1 == -1) {
    (**(code **)(**(int **)(local_8 + 0x48) + 0x34))(*(int **)(local_8 + 0x48),local_14);
    pbVar2 = local_30;
    FUN_004b3498(local_8,local_10,local_14,(int *)pbVar2);
  }
  FUN_00403e04(local_c,local_14);
  *in_FS_OFFSET = pbVar2;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

