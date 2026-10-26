/*
 * FUN_00431840 at 00431840
 * undefined4 __register FUN_00431840(int param_1)
 * Address ranges: 00431840-00431866
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00431840(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = FUN_004197ec();
  if ((cVar2 != '\0') &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x18) + 0x108),
     iVar1 == *(int *)(*(int *)(param_1 + 0x10) + 0x30))) {
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return 0;
}

