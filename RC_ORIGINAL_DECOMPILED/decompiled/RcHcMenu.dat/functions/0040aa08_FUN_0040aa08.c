/*
 * FUN_0040aa08 at 0040aa08
 * undefined __register FUN_0040aa08(byte param_1, undefined4 param_2, int * param_3)
 * Address ranges: 0040aa08-0040aa3c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040aa08(byte param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined4 local_44 [16];
  
  uVar1 = FUN_0040e83a((undefined1 *)local_44,&stack0x00000004,'\x01',param_2,0,param_1);
  FUN_00403e98(param_3,local_44,uVar1);
  return;
}

