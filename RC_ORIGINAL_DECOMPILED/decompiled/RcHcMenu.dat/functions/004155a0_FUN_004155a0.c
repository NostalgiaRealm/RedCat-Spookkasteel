/*
 * FUN_004155a0 at 004155a0
 * bool __register FUN_004155a0(int param_1, undefined4 param_2, uint param_3)
 * Address ranges: 004155a0-004155b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004155a0(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = FUN_00417010(param_1,param_2,param_3);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return (char)uVar1 == '\0';
}

