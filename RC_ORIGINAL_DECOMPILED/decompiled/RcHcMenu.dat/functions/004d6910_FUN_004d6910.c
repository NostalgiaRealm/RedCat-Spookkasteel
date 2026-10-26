/*
 * FUN_004d6910 at 004d6910
 * undefined __register FUN_004d6910(int * param_1, undefined1 param_2)
 * Address ranges: 004d6910-004d6996
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d6910(int *param_1,undefined1 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_10 = 0;
  puStack_118 = &LAB_004d6997;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_9 = param_2;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x02') {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".SetReverse: invalid for non-SELECT queries");
    FUN_00403d94(local_10);
  }
  *(undefined1 *)(local_8 + 6) = local_9;
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004d699e;
  puStack_118 = (undefined1 *)0x4d6996;
  FUN_00403db0(&local_10);
  return;
}

