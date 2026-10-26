/*
 * FUN_005cf9a0 at 005cf9a0
 * undefined FUN_005cf9a0(void)
 * Address ranges: 005cf9a0-005cf9c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005cf9a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_005cf9d0();
  iVar1 = FUN_005cf910(param_1,param_2);
  puVar3 = *(undefined4 **)(iVar1 + 4);
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  return;
}

