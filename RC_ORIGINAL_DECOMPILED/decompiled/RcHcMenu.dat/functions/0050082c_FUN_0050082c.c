/*
 * FUN_0050082c at 0050082c
 * uint __register FUN_0050082c(int param_1)
 * Address ranges: 0050082c-0050084f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0050082c(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004c88dc(*(int *)(param_1 + 0x220));
  return uVar1 & 0x7f;
}

