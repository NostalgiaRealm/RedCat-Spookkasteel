/*
 * FUN_004e28e0 at 004e28e0
 * undefined4 __register FUN_004e28e0(int param_1, byte param_2)
 * Address ranges: 004e28e0-004e2909
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004e28e0(int param_1,byte param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = CONCAT31((int3)((uint)param_1 >> 8),param_2);
  bVar2 = param_2 < 7;
  if (param_2 < 8) {
    uVar1 = param_2 & 0x7f;
    bVar2 = (*(byte *)(param_1 + 0x18 + ((int)uVar1 >> 3)) >> (param_2 & 7) & 1) != 0;
  }
  return CONCAT31((int3)(uVar1 >> 8),bVar2);
}

