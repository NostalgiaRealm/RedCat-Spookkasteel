/*
 * FUN_005200dc at 005200dc
 * undefined __register FUN_005200dc(uint param_1)
 * Address ranges: 005200dc-005200f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005200dc(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x24c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

