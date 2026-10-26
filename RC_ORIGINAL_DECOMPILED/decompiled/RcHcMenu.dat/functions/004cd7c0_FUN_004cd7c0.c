/*
 * FUN_004cd7c0 at 004cd7c0
 * undefined __register FUN_004cd7c0(int * param_1, int * param_2)
 * Address ranges: 004cd7c0-004cd831
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cd7c0(int *param_1,int *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_1c;
  int local_18;
  int local_14;
  undefined1 local_10;
  int *local_c;
  int *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = 0;
  local_1c = (byte *)0x0;
  puStack_24 = &LAB_004cd832;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_2;
  local_8 = param_1;
  FUN_00493550(param_1,&local_18);
  local_14 = local_18;
  local_10 = 0xb;
  FUN_00406a48(&PTR_DAT_004cd7b8,(int *)&local_1c);
  FUN_0040a894(local_1c,&local_14,0,param_2);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004cd839;
  puStack_24 = (undefined1 *)0x4cd831;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}

