/*
 * FUN_00502078 at 00502078
 * undefined __register FUN_00502078(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 00502078-005020ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00502078(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  
  if ((*(byte *)(param_1 + 8) & 8) == 0) {
    (**(code **)(*(int *)param_1[0x8e] + 0x60))((int *)param_1[0x8e],0);
    param_3 = extraout_ECX;
  }
  FUN_004325e0(param_1,param_2,param_3);
  return;
}

