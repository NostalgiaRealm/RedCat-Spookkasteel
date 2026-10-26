/*
 * FUN_00440e44 at 00440e44
 * undefined4 __register FUN_00440e44(int param_1)
 * Address ranges: 00440e44-00440e72
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00440e44(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043daac(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (*(char *)(iVar2 + 0x59) == *(char *)(*(int *)(param_1 + 0x18) + 0x2d)) {
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return 0;
}

