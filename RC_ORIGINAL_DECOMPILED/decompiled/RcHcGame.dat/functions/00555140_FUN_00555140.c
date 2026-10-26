/*
 * FUN_00555140 at 00555140
 * undefined FUN_00555140(void)
 * Address ranges: 00555140-00555172
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __thiscall
FUN_00555140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_00554660(param_2,param_3,param_1 + 4,param_1 + 0x10,param_4,param_5);
  iVar2 = FUN_005b7d50(uVar1);
  return iVar2 != 0;
}

