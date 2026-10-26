/*
 * FUN_0050e794 at 0050e794
 * undefined __register FUN_0050e794(int * param_1)
 * Address ranges: 0050e794-0050e83f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e794(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined *local_24;
  tagRECT local_20;
  tagSIZE local_10;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  local_24 = (undefined *)0x0;
  puStack_2c = &LAB_0050e840;
  uStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_30;
  local_8 = param_1;
  FUN_0050e30c(param_1,&local_20);
  OffsetRect(&local_20,-2,0);
  FUN_00432714((int)local_8,(int *)&local_24);
  FUN_0041cd64((int *)local_8[0x81],local_24,&local_10);
  uVar1 = local_20.left + local_10.cx;
  if (SCARRY4(local_20.left,local_10.cx)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  uVar2 = uVar1 + 5;
  if (SCARRY4(uVar1,5)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  local_20.right = uVar2;
  uVar1 = InflateRect(&local_20,-1,-1);
  bVar3 = SCARRY4(local_20.bottom,1);
  local_20.bottom = local_20.bottom + 1;
  if (bVar3) {
    thunk_FUN_00402874(uVar1);
  }
  FUN_0041c97c((int *)local_8[0x81],&local_20);
  *in_FS_OFFSET = uStack_30;
  puStack_28 = &LAB_0050e847;
  puStack_2c = (undefined1 *)0x50e83f;
  FUN_00403db0((int *)&local_24);
  return;
}

