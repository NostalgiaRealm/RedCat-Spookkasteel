/*
 * FUN_005e6e90 at 005e6e90
 * undefined FUN_005e6e90(void)
 * Address ranges: 005e6e90-005e6ec9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005e6e90(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = param_2;
  param_2 = *(undefined4 *)(param_2 + 8);
  FUN_005e73b0(&param_2,2);
  puVar2 = *(undefined1 **)(iVar1 + 4);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_0064a3b4;
  }
  FUN_005e73b0(puVar2,*(undefined4 *)(iVar1 + 8));
  return;
}

