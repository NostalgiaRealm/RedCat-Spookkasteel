/*
 * FUN_0041ea40 at 0041ea40
 * undefined __register FUN_0041ea40(int * param_1, undefined * param_2, undefined4 * param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 0041ea40-0041eac2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041ea40(int *param_1,undefined *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = (undefined4 *)0x0;
  puStack_24 = &LAB_0041eac3;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_c = param_3;
  local_8 = param_2;
  puVar1 = FUN_00404c74(0x10,"\x0e\vTFileFormat\x10");
  FUN_00409804(local_8,(int *)&local_10);
  FUN_00403e04(puVar1 + 1,local_10);
  *puVar1 = param_4;
  FUN_00403e04(puVar1 + 2,local_c);
  puVar1[3] = param_5;
  FUN_004121d8(param_1,(int)puVar1);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0041eaca;
  puStack_24 = (undefined1 *)0x41eac2;
  FUN_00403db0((int *)&local_10);
  return;
}

