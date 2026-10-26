/*
 * FUN_004045c8 at 004045c8
 * uint __register FUN_004045c8(int param_1)
 * Address ranges: 004045c8-004045d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004045c8(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + -4) >> 1;
  }
  return uVar1;
}

