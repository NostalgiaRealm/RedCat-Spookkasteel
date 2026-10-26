/*
 * FUN_0054b510 at 0054b510
 * undefined __register FUN_0054b510(uint param_1)
 * Address ranges: 0054b510-0054b527
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054b510(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x44);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

