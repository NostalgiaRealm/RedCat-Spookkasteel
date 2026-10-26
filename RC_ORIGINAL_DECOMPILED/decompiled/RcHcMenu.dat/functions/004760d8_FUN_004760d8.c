/*
 * FUN_004760d8 at 004760d8
 * int __register FUN_004760d8(int param_1, byte param_2, undefined4 * param_3, uint param_4)
 * Address ranges: 004760d8-00476145
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004760d8(int param_1,byte param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00476b30(param_1,5,0xe,3);
  FUN_00476b74(param_1,iVar1,0,(ushort)*(byte *)(param_1 + 8 + (uint)param_2));
  FUN_00476b74(param_1,iVar1,1,(short)param_4);
  uVar2 = FUN_00476250(param_1,param_3,param_4);
  FUN_00476b74(param_1,iVar1,2,(short)uVar2);
  return iVar1;
}

