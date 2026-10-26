/*
 * FUN_0049f64c at 0049f64c
 * undefined __register FUN_0049f64c(uint param_1)
 * Address ranges: 0049f64c-0049f663
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049f64c(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

