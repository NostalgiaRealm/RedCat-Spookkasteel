/*
 * FUN_004d5534 at 004d5534
 * undefined __register FUN_004d5534(int param_1, uint param_2)
 * Address ranges: 004d5534-004d55b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d5534(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 uVar2;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  uint *local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_14 = (uint *)0x0;
  uVar2 = 1;
  puStack_1c = &LAB_004d55b1;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_10 = param_2;
  local_c = param_2;
  local_8 = param_1;
  FUN_00404238(param_1,param_2,4,(int *)&local_14);
  FUN_00404140(local_14,(uint *)&DAT_004d55c8);
  if ((((bool)uVar2) ||
      (FUN_00404140(local_14,(uint *)&DAT_004d55d8), uVar1 = local_10, (bool)uVar2)) &&
     (uVar1 = local_c + 4, SCARRY4(local_c,4))) {
    uVar1 = thunk_FUN_00402874(local_c + 4);
  }
  local_10 = uVar1;
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004d55b8;
  puStack_1c = (undefined1 *)0x4d55b0;
  FUN_00403db0((int *)&local_14);
  return;
}

