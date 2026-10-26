/*
 * FUN_004f787c at 004f787c
 * undefined4 __register FUN_004f787c(undefined4 param_1, undefined4 param_2, int param_3, int param_4)
 * Address ranges: 004f787c-004f78b1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004f787c(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  BOOL BVar1;
  int local_8;
  
  if (*(char *)(*(int *)(param_4 + -4) + 0x208) != '\0') {
    local_8 = param_3;
    BVar1 = SystemParametersInfoA(0x26,0,&local_8,0);
    if ((BVar1 != 0) && (local_8 != 0)) {
      return CONCAT31((int3)((uint)BVar1 >> 8),1);
    }
  }
  return 0;
}

