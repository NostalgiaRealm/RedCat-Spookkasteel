/*
 * FUN_00477048 at 00477048
 * undefined4 __register FUN_00477048(int param_1)
 * Address ranges: 00477048-0047705f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00477048(int param_1)

{
  byte *pbVar1;
  
  for (pbVar1 = *(byte **)(param_1 + 0x30); (*pbVar1 != 0 && (*pbVar1 < 0x21)); pbVar1 = pbVar1 + 1)
  {
  }
  return CONCAT31((int3)((uint)pbVar1 >> 8),*pbVar1 == 0x28);
}

