/*
 * FUN_00458644 at 00458644
 * undefined __register FUN_00458644(int param_1, int * param_2)
 * Address ranges: 00458644-004586ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458644(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  byte **ppbVar3;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_1c;
  undefined4 *local_18;
  byte *local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_10 = (undefined4 *)0x0;
  local_14 = (byte *)0x0;
  local_18 = (undefined4 *)0x0;
  local_1c = (byte *)0x0;
  puStack_20 = (undefined1 *)0x45865d;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_1);
  puStack_24 = &LAB_004586ef;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  ppbVar3 = &local_14;
  puStack_20 = &stack0xfffffffc;
  uVar1 = FUN_00404030(local_8);
  uVar2 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402874(uVar1);
    uVar2 = extraout_ECX;
  }
  FUN_00404238(local_8,2,uVar2,(int *)ppbVar3);
  FUN_004096cc(local_14,(int *)&local_10);
  puVar4 = local_10;
  FUN_00404238(local_8,1,1,(int *)&local_1c);
  FUN_00409690(local_1c,(int *)&local_18);
  FUN_0040407c(local_c,local_18,puVar4);
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_004586f6;
  puStack_24 = (undefined1 *)0x4586e6;
  FUN_00403dd4((int *)&local_1c,4);
  puStack_24 = (undefined1 *)0x4586ee;
  FUN_00403db0(&local_8);
  return;
}

