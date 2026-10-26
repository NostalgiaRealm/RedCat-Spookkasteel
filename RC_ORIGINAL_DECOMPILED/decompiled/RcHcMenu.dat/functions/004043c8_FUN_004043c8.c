/*
 * FUN_004043c8 at 004043c8
 * undefined __register FUN_004043c8(undefined * param_1, undefined1 * param_2)
 * Address ranges: 004043c8-004043ce;004043d0-004043ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004043c8(undefined *param_1,undefined1 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 != (undefined1 *)0x0) {
    iVar2 = *(int *)(param_2 + -4);
    iVar3 = -iVar2;
  }
  puVar1 = FUN_004070c3(param_1,iVar3);
  FUN_00407058(puVar1,param_2,iVar2);
  return;
}

