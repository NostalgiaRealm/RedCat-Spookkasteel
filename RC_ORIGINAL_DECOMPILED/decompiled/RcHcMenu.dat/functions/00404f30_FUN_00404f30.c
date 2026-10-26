/*
 * FUN_00404f30 at 00404f30
 * bool __register FUN_00404f30(undefined4 param_1, short * param_2, undefined4 param_3)
 * Address ranges: 00404f30-00404f44
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00404f30(undefined4 param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  
  sVar1 = *param_2;
  if (sVar1 == 0x101) {
    FUN_00404ec4(param_1,(undefined4 *)param_2,param_3);
  }
  return sVar1 == 0x101;
}

