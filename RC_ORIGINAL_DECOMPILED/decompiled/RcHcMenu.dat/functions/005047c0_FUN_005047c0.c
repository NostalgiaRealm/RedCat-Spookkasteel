/*
 * FUN_005047c0 at 005047c0
 * undefined __register FUN_005047c0(int param_1)
 * Address ranges: 005047c0-00504804
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005047c0(int param_1)

{
  int iVar1;
  
  if (*(char *)(*(int *)(param_1 + 0x234) + 8) != '\0') {
    FUN_005018b8(param_1,(uint *)0x0);
    return;
  }
  iVar1 = FUN_00403224(*(int **)(param_1 + 0x234),(int)&PTR_FUN_00503898);
  FUN_005018b8(param_1,*(uint **)(iVar1 + 0xc));
  return;
}

