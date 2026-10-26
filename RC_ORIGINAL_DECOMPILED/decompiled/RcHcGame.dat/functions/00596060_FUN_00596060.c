/*
 * FUN_00596060 at 00596060
 * undefined FUN_00596060(void)
 * Address ranges: 00596060-00596087
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00596060(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 local_18 [24];
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x7c))(local_18);
  piVar3 = param_1 + 0x47;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar1;
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  return;
}

