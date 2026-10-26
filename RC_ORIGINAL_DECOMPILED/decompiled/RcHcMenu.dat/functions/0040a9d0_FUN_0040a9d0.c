/*
 * FUN_0040a9d0 at 0040a9d0
 * undefined __register FUN_0040a9d0(byte param_1, int param_2, undefined4 param_3, int * param_4)
 * Address ranges: 0040a9d0-0040aa04
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040a9d0(byte param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 local_44 [16];
  
  uVar1 = FUN_0040e83a((undefined1 *)local_44,&stack0x00000008,'\0',param_3,param_2,param_1);
  FUN_00403e98(param_4,local_44,uVar1);
  return;
}

