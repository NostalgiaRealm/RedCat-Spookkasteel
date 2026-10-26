/*
 * FUN_004a83e4 at 004a83e4
 * undefined __register FUN_004a83e4(int * param_1)
 * Address ranges: 004a83e4-004a8494;004a84ab-004a84c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a83e4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int *local_8;
  
  puStack_30 = &stack0xfffffffc;
  puStack_3c = &stack0xfffffffc;
  local_20 = (int *)0x0;
  puStack_34 = &LAB_004a84c1;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_40 = &LAB_004a8495;
  uStack_44 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_44;
  local_8 = param_1;
  FUN_00406aa0((int *)&DAT_00574264);
  iVar2 = DirectSoundCreate();
  FUN_004a825c(iVar2,0x4a84d8);
  FUN_00402cfc(&local_1c,0x14,0);
  local_1c = 0x14;
  local_18 = 1;
  FUN_004a833c(&local_1c,(int *)&local_20);
  FUN_00406ab8((int *)&DAT_00574268,local_20);
  FUN_00438988(local_8);
  piVar1 = DAT_00574264;
  iVar2 = (**(code **)(*DAT_00574264 + 0x18))();
  FUN_004a825c(iVar2,0x4a84fc);
  DAT_00571974 = 1;
  *in_FS_OFFSET = piVar1;
  *in_FS_OFFSET = 0;
  FUN_00406aa0((int *)&local_20);
  return;
}

