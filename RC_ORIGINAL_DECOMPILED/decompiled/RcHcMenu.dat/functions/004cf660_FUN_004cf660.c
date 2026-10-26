/*
 * FUN_004cf660 at 004cf660
 * undefined __register FUN_004cf660(int * param_1)
 * Address ranges: 004cf660-004cf826
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cf660(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_130;
  undefined1 *puStack_12c;
  undefined1 *puStack_128;
  int local_120;
  int local_11c [3];
  byte local_110 [256];
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_128 = &stack0xfffffffc;
  local_11c[0] = 0;
  local_120 = 0;
  local_11c[2] = 0;
  local_11c[1] = 0;
  local_c = 0;
  local_10 = 0;
  puStack_12c = &LAB_004cf827;
  uStack_130 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_130;
  local_8 = param_1;
  cVar4 = (**(code **)(*param_1 + 0x44))();
  if (cVar4 == '\0') {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_004040f0(&local_c,3);
    FUN_00403d94(local_c);
  }
  if (*(short *)((int)local_8 + 0x42) != 0) {
    (*(code *)local_8[0x10])(local_8[0x11],local_8);
  }
  if (local_8[10] != 0) {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(local_11c + 1,local_110);
    FUN_004040f0(local_11c + 2,3);
    FUN_00403d94(local_11c[2]);
  }
  if (local_8[8] != 0) {
    FUN_00402fe0(*local_8,local_110);
    FUN_00403fd4(&local_120,local_110);
    FUN_004040f0(local_11c,3);
    FUN_00403d94(local_11c[0]);
  }
  (**(code **)(*local_8 + 0x14))();
  FUN_004d0460((int)local_8);
  if (*(short *)((int)local_8 + 0x4a) != 0) {
    (*(code *)local_8[0x12])(local_8[0x13],local_8);
  }
  uVar3 = local_8[1];
  piVar1 = (int *)(uVar3 + 0x20);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  if (SBORROW4(iVar2,1)) {
    thunk_FUN_00402874(uVar3);
  }
  *in_FS_OFFSET = uStack_130;
  puStack_128 = &LAB_004cf82e;
  puStack_12c = (undefined1 *)0x4cf819;
  FUN_00403dd4(&local_120,4);
  puStack_12c = (undefined1 *)0x4cf826;
  FUN_00403dd4(&local_10,2);
  return;
}

