/*
 * FUN_00427ed0 at 00427ed0
 * undefined FUN_00427ed0(void)
 * Address ranges: 00427ed0-00427f0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00427ed0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(*param_1 + 0xa0))(param_2);
  if (cVar1 != '\0') {
    iVar2 = param_1[0x5f];
    FUN_004969a0(iVar2);
    FUN_0042d270(iVar2);
    FUN_00423710(0);
    FUN_00502350(0);
  }
  return;
}

