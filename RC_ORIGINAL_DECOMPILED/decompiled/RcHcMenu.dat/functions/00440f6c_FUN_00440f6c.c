/*
 * FUN_00440f6c at 00440f6c
 * undefined4 __register FUN_00440f6c(int param_1)
 * Address ranges: 00440f6c-00440f92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00440f6c(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_004197ec();
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x80),
     iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x30))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}

