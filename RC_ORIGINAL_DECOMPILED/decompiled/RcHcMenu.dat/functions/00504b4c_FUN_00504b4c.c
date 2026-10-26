/*
 * FUN_00504b4c at 00504b4c
 * uint __register FUN_00504b4c(void)
 * Address ranges: 00504b4c-00504b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00504b4c(void)

{
  uint uVar1;
  int extraout_EDX;
  
  uVar1 = FUN_00402b54();
  if ((int)uVar1 >> 0x1f != extraout_EDX) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  return uVar1;
}

