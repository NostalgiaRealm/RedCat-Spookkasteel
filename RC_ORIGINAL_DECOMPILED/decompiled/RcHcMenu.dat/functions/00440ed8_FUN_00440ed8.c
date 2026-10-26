/*
 * FUN_00440ed8 at 00440ed8
 * undefined4 __register FUN_00440ed8(int param_1)
 * Address ranges: 00440ed8-00440f06
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00440ed8(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_0043dae8(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00403224(*(int **)(param_1 + 0x10),(int)&PTR_FUN_0043d40c);
    if (*(int *)(iVar2 + 100) == *(int *)(*(int *)(param_1 + 0x18) + 0x34)) {
      return CONCAT31((int3)((uint)*(int *)(iVar2 + 100) >> 8),1);
    }
  }
  return 0;
}

