/*
 * FUN_00504b20 at 00504b20
 * uint __register FUN_00504b20(void)
 * Address ranges: 00504b20-00504b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00504b20(void)

{
  uint uVar1;
  int extraout_EDX;
  
  uVar1 = FUN_00402b54();
  if ((int)uVar1 >> 0x1f != extraout_EDX) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  return uVar1;
}

