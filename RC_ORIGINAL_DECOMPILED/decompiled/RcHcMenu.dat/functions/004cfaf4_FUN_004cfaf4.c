/*
 * FUN_004cfaf4 at 004cfaf4
 * undefined __register FUN_004cfaf4(int * param_1)
 * Address ranges: 004cfaf4-004cfbfa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cfaf4(int *param_1)

{
  char cVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_14 = 0;
  local_c = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  puStack_120 = &LAB_004cfbfb;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_8 = param_1;
  cVar1 = (**(code **)(*param_1 + 0x44))();
  if (cVar1 != '\0') {
    FUN_00402fe0(*local_8,local_114);
    FUN_00403fd4(&local_14,local_114);
    FUN_00404038(&local_14,(undefined4 *)".Open: already open");
    FUN_00403d94(local_14);
  }
  if (*(short *)((int)local_8 + 0x32) != 0) {
    (*(code *)local_8[0xc])(local_8[0xd],local_8);
  }
  FUN_00403e48((int *)&local_c,*(int *)(local_8[1] + 0x10));
  FUN_00403e48((int *)&local_10,*(int *)(local_8[1] + 0x14));
  if (*(char *)(local_8[1] + 0xc) != '\0') {
    cVar1 = (**(code **)(*(int *)local_8[1] + 0x40))((int *)local_8[1],&local_c,&local_10);
    if (cVar1 == '\0') goto LAB_004cfbe0;
  }
  FUN_004cf9ac(local_8,local_c,local_10);
  if (*(short *)((int)local_8 + 0x3a) != 0) {
    (*(code *)local_8[0xe])(local_8[0xf],local_8);
  }
LAB_004cfbe0:
  *in_FS_OFFSET = uStack_124;
  puStack_11c = &LAB_004cfc02;
  puStack_120 = (undefined1 *)0x4cfbfa;
  FUN_00403dd4(&local_14,3);
  return;
}

