/*
 * FUN_00437d74 at 00437d74
 * undefined __register FUN_00437d74(int * param_1, int param_2, undefined4 param_3)
 * Address ranges: 00437d74-00437d91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437d74(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00403270(param_1,0,param_3);
  *(uint *)(param_2 + 0xc) = uVar1 & 0x7f;
  return;
}

