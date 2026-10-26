/*
 * FUN_004ea698 at 004ea698
 * undefined __register FUN_004ea698(int * param_1, char param_2)
 * Address ranges: 004ea698-004ea75c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ea698(int *param_1,char param_2)

{
  byte extraout_DL;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  byte local_9;
  int *local_8;
  
  local_10 = 0;
  puStack_114 = (undefined1 *)0x4ea6ab;
  local_8 = FUN_00403434(param_1,param_2);
  puStack_118 = &LAB_004ea77a;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  puStack_114 = &stack0xfffffffc;
  local_9 = extraout_DL;
  if (local_8[4] != 0) {
    puStack_120 = (undefined1 *)0x4ea6d8;
    puStack_114 = &stack0xfffffffc;
    FUN_00402fe0(*local_8,local_110);
    puStack_120 = (undefined1 *)0x4ea6e6;
    FUN_00403fd4(&local_10,local_110);
    puStack_120 = (undefined1 *)0x4ea6f3;
    FUN_00404038(&local_10,(undefined4 *)".Destroy: bookmark(s) not freed");
    puStack_120 = (undefined1 *)0x4ea705;
    FUN_00403d94(local_10);
  }
  puStack_124 = &LAB_004ea75d;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_120 = &stack0xfffffffc;
  FUN_004d4fbc(local_8);
  FUN_00403094((int *)local_8[0xc]);
  local_8[0xc] = 0;
  FUN_00403094((int *)local_8[0xb]);
  local_8[0xb] = 0;
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_004ea764;
  puStack_124 = (undefined1 *)0x4ea75c;
  FUN_004d4fe4(local_8,local_9 & 0xfc);
  return;
}

