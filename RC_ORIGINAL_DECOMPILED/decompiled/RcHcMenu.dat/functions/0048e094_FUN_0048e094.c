/*
 * FUN_0048e094 at 0048e094
 * undefined4 __register FUN_0048e094(byte * param_1)
 * Address ranges: 0048e094-0048e0bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0048e094(byte *param_1)

{
  undefined1 uVar1;
  undefined3 uVar2;
  
  if ((*param_1 == 0) || (9 < *param_1)) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined3)((uint)param_1 >> 8);
    uVar1 = 1;
  }
  return CONCAT31(uVar2,uVar1);
}

