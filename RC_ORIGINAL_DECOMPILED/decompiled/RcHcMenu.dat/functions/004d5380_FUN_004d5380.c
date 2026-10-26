/*
 * FUN_004d5380 at 004d5380
 * undefined __register FUN_004d5380(int * param_1)
 * Address ranges: 004d5380-004d5431
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5380(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = 0;
  local_10 = 0;
  puStack_118 = &LAB_004d5432;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x38))();
  if (cVar1 == '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
  }
  iVar2 = FUN_004d6708((int)local_8);
  if (0 < iVar2) {
    FUN_0045b8fc((undefined4 *)local_8[7]);
  }
  (**(code **)(*local_8 + 0xc))();
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_004d5439;
  puStack_118 = (undefined1 *)0x4d5431;
  FUN_00403dd4(&local_10,2);
  return;
}

