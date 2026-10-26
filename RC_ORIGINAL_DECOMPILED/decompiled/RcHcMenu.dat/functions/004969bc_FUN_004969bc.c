/*
 * FUN_004969bc at 004969bc
 * bool __register FUN_004969bc(int param_1)
 * Address ranges: 004969bc-004969e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_004969bc(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) | 2;
  return (bVar1 & 2) == 0;
}

