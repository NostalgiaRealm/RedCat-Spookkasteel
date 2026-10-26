/*
 * FUN_0044f348 at 0044f348
 * undefined __register FUN_0044f348(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0044f348-0044f36c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044f348(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004027e8(0xc);
  *puVar1 = *(undefined4 *)(param_1 + 0x50);
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined4 **)(param_1 + 0x50) = puVar1;
  return;
}

