/*
 * FUN_00424138 at 00424138
 * undefined __register FUN_00424138(uint param_1)
 * Address ranges: 00424138-00424164
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00424138(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  while (uVar2 != 0) {
    do {
      uVar1 = uVar2 & 1;
      uVar2 = uVar2 >> 1;
    } while (uVar1 == 0);
  }
  return;
}

