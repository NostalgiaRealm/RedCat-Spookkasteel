/*
 * FUN_005298b4 at 005298b4
 * undefined __register FUN_005298b4(uint param_1)
 * Address ranges: 005298b4-005298ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005298b4(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x29c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

