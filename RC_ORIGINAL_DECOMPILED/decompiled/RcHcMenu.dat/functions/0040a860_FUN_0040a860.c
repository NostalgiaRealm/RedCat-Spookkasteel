/*
 * FUN_0040a860 at 0040a860
 * byte * __register FUN_0040a860(byte * param_1, byte * param_2, byte * param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0040a860-0040a893
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

byte * FUN_0040a860(byte *param_1,byte *param_2,byte *param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0040a108((char *)param_3);
  iVar1 = FUN_0040a434(param_1,param_2,param_3,param_4,param_5,iVar1);
  param_1[iVar1] = 0;
  return param_1;
}

