/*
 * FUN_0040292c at 0040292c
 * undefined4 __register FUN_0040292c(void)
 * Address ranges: 0040292c-00402941
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0040292c(void)

{
  undefined4 uVar1;
  LPVOID pvVar2;
  
  pvVar2 = FUN_00407904();
  uVar1 = *(undefined4 *)((int)pvVar2 + 4);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  return uVar1;
}

