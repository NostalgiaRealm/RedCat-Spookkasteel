/*
 * FUN_005699f0 at 005699f0
 * undefined __register FUN_005699f0(int * param_1)
 * Address ranges: 005699f0-00569a8f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005699f0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_110 [256];
  int local_10;
  undefined4 *local_c;
  int *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_c = (undefined4 *)0x0;
  local_10 = 0;
  puStack_118 = &LAB_00569a90;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_110);
  FUN_00403fd4(&local_10,local_110);
  FUN_004040f0((int *)&local_c,3);
  puVar1 = local_c;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,3);
  *(undefined1 *)(local_8 + 0x49) = 1;
  FUN_00451440();
  *in_FS_OFFSET = &DAT_00569ab0;
  FUN_00403dd4(&local_10,2);
  return;
}

