/*
 * FUN_00421178 at 00421178
 * undefined __register FUN_00421178(int param_1)
 * Address ranges: 00421178-00421198
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00421178(int param_1)

{
  int iVar1;
  
  FUN_00421414(param_1);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  FUN_0040e4b4((undefined4 *)(iVar1 + 0x6c));
  return;
}

