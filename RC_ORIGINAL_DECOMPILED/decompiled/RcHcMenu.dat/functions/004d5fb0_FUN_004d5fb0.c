/*
 * FUN_004d5fb0 at 004d5fb0
 * undefined __register FUN_004d5fb0(int * param_1)
 * Address ranges: 004d5fb0-004d603c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5fb0(int *param_1)

{
  undefined1 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_118;
  undefined1 *puStack_114;
  undefined1 *puStack_110;
  byte local_10c [256];
  int local_c;
  int *local_8;
  
  puStack_110 = &stack0xfffffffc;
  local_c = 0;
  puStack_114 = &LAB_004d603d;
  uStack_118 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_118;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)((int)param_1 + 9) != '\x02') {
    FUN_00402fe0(*param_1,local_10c);
    FUN_00403fd4(&local_c,local_10c);
    FUN_00404038(&local_c,(undefined4 *)".FetchAll: not a SELECT query");
    FUN_00403d94(local_c);
    puVar1 = puStack_110;
  }
  puStack_110 = puVar1;
  (**(code **)(*local_8 + 0x24))();
  FUN_004d5d70((int)local_8,'\0');
  *in_FS_OFFSET = uStack_118;
  puStack_110 = &LAB_004d6044;
  puStack_114 = (undefined1 *)0x4d603c;
  FUN_00403db0(&local_c);
  return;
}

