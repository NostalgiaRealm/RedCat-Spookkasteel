/*
 * FUN_00458598 at 00458598
 * undefined __register FUN_00458598(int param_1, int * param_2)
 * Address ranges: 00458598-00458636
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00458598(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 **ppuVar3;
  undefined4 *puVar4;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte *local_18;
  undefined4 *local_14;
  undefined4 *local_10;
  int *local_c;
  int local_8;
  
  local_10 = (undefined4 *)0x0;
  local_14 = (undefined4 *)0x0;
  local_18 = (byte *)0x0;
  puStack_1c = (undefined1 *)0x4585b0;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4(param_1);
  puStack_20 = &LAB_00458637;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  ppuVar3 = &local_10;
  puStack_1c = &stack0xfffffffc;
  uVar1 = FUN_00404030(local_8);
  uVar2 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402874(uVar1);
    uVar2 = extraout_ECX;
  }
  FUN_00404238(local_8,2,uVar2,(int *)ppuVar3);
  puVar4 = local_10;
  FUN_00404238(local_8,1,1,(int *)&local_18);
  FUN_00409690(local_18,(int *)&local_14);
  FUN_0040407c(local_c,local_14,puVar4);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_0045863e;
  puStack_20 = (undefined1 *)0x45862e;
  FUN_00403dd4((int *)&local_18,3);
  puStack_20 = (undefined1 *)0x458636;
  FUN_00403db0(&local_8);
  return;
}

