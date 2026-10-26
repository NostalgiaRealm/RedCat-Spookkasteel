/*
 * FUN_00554b20 at 00554b20
 * undefined FUN_00554b20(void)
 * Address ranges: 00554b20-00554b5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_00554b20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00554660(param_2,param_1 + 4,param_1 + 0x10,param_3,param_4,param_6,param_7,param_5);
  iVar2 = FUN_005b7dc0(uVar1);
  return iVar2 != 0;
}

