/*
 * FUN_00601b92 at 00601b92
 * undefined FUN_00601b92(void)
 * Address ranges: 00601b92-00601bb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall FUN_00601b92(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  ushort unaff_SI;
  
  cVar1 = (**(code **)(*param_1 + 0x30))(param_3,0);
  return (*(ushort *)(param_1[4] + cVar1 * 2) & unaff_SI) != 0;
}

