/*
 * FUN_0040cc44 at 0040cc44
 * undefined4 __register FUN_0040cc44(void)
 * Address ranges: 0040cc44-0040cc58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040cc44(void)

{
  int iVar1;
  
  iVar1 = FUN_00402868();
  if (iVar1 != 0) {
    iVar1 = FUN_00402868();
    return *(undefined4 *)(iVar1 + 8);
  }
  return 0;
}

