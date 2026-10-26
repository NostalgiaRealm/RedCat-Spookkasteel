/*
 * FUN_00601c50 at 00601c50
 * undefined FUN_00601c50(void)
 * Address ranges: 00601c50-00601c80
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00601c50(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x30))(param_2,0);
  uVar2 = FUN_00600cb2((int)cVar1,param_1 + 2);
  (**(code **)(*param_1 + 0x28))(uVar2);
  return;
}

