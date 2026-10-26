/*
 * FUN_00529720 at 00529720
 * undefined __register FUN_00529720(uint param_1)
 * Address ranges: 00529720-00529754
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00529720(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x2c8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  if (*(int *)(param_1 + 0x290) != 0) {
    FUN_0054b510(*(uint *)(param_1 + 0x290));
  }
  return;
}

