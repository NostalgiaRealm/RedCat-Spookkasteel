/*
 * FUN_0048b848 at 0048b848
 * uint __register FUN_0048b848(void)
 * Address ranges: 0048b848-0048b873
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0048b848(void)

{
  uint uVar1;
  int extraout_EDX;
  
  uVar1 = FUN_00402b54();
  if ((int)uVar1 >> 0x1f != extraout_EDX) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  return uVar1;
}

