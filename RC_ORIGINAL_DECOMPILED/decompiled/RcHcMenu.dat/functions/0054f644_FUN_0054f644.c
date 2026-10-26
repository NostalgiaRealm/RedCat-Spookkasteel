/*
 * FUN_0054f644 at 0054f644
 * undefined __register FUN_0054f644(int * param_1, int param_2)
 * Address ranges: 0054f644-0054f747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054f644(int *param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_124;
  undefined1 *puStack_120;
  undefined1 *puStack_11c;
  int *local_118;
  byte local_114 [256];
  int local_14;
  undefined4 *local_10;
  int local_c;
  int *local_8;
  
  puStack_11c = &stack0xfffffffc;
  local_118 = (int *)0x0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  puStack_120 = &LAB_0054f748;
  uStack_124 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_124;
  local_c = param_2;
  local_8 = param_1;
  FUN_00402fe0(*param_1,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_004040f0((int *)&local_10,3);
  puVar1 = local_10;
  uVar2 = FUN_004a418c();
  FUN_004a48b8(uVar2,puVar1,0);
  uVar3 = FUN_0054fd74((int)local_8);
  if ((char)uVar3 != '\0') {
    FUN_004a8534(local_8[4],(int *)&local_118);
    FUN_00406ab8(local_8 + 6,local_118);
    FUN_0054feb0(local_8,local_c);
    FUN_004a85c4(local_8[4],(int *)local_8[6]);
    (**(code **)(*(int *)local_8[6] + 0x30))();
  }
  uVar2 = FUN_004a418c();
  FUN_004a49b0(uVar2);
  *in_FS_OFFSET = "StartMusic";
  FUN_00406aa0((int *)&local_118);
  FUN_00403dd4(&local_14,2);
  return;
}

