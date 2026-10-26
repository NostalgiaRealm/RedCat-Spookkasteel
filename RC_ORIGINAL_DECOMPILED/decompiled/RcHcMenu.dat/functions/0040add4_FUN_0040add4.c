/*
 * FUN_0040add4 at 0040add4
 * undefined4 __register FUN_0040add4(uint param_1)
 * Address ranges: 0040add4-0040ae0c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040add4(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 & 3) == 0) {
    uVar2 = param_1 & 0xffff;
    uVar1 = 100;
    if ((uVar2 % 100 != 0) || (uVar1 = 400, uVar2 % 400 == 0)) {
      return CONCAT31((int3)(uVar2 / uVar1 >> 8),1);
    }
  }
  return 0;
}

