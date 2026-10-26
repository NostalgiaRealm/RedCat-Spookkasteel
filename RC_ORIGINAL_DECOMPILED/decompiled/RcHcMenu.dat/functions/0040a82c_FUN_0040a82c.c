/*
 * FUN_0040a82c at 0040a82c
 * byte * __register FUN_0040a82c(byte * param_1, byte * param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 0040a82c-0040a85f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_0040a82c(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0040a108((char *)param_2);
  iVar1 = FUN_0040a434(param_1,(byte *)0x7fffffff,param_2,param_4,param_3,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}

