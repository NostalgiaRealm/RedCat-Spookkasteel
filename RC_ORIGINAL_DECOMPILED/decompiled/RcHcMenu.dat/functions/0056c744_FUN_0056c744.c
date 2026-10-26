/*
 * FUN_0056c744 at 0056c744
 * undefined __register FUN_0056c744(undefined4 param_1, uint * param_2, int * param_3, byte param_4)
 * Address ranges: 0056c744-0056c7a9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056c744(undefined4 param_1,uint *param_2,int *param_3,byte param_4)

{
  uint uVar1;
  uint *in_FS_OFFSET;
  uint uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  int local_14;
  int *local_10;
  uint *local_c;
  undefined4 local_8;
  
  local_14 = 0;
  puStack_1c = (undefined1 *)0x56c761;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_20 = &LAB_0056c7aa;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = (uint)&uStack_24;
  uVar1 = (uint)param_4;
  puStack_1c = &stack0xfffffffc;
  FUN_0056be70(local_10,&local_14);
  FUN_0056c490(local_8,local_c,local_14,(char)uVar1);
  *in_FS_OFFSET = uVar1;
  puStack_20 = &LAB_0056c7b1;
  uStack_24 = 0x56c7a1;
  FUN_00403db0(&local_14);
  uStack_24 = 0x56c7a9;
  FUN_00403db0((int *)&local_c);
  return;
}

