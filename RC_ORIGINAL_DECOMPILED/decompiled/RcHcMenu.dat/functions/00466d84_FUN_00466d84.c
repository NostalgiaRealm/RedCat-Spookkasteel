/*
 * FUN_00466d84 at 00466d84
 * undefined __register FUN_00466d84(undefined4 * param_1, int param_2)
 * Address ranges: 00466d84-00466e12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00466d84(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 local_18;
  undefined1 local_14;
  undefined4 *local_10;
  undefined1 local_c;
  undefined4 *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_28 = &LAB_00466e13;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  if ((param_2 == 0) || (*(int *)(param_2 + 8) == 0)) {
    piVar1 = FUN_0040ceec((int *)&DAT_00461aa8,'\x01',param_1);
    FUN_0040382c(piVar1);
  }
  else {
    local_18 = *(undefined4 *)(param_2 + 8);
    local_14 = 0xb;
    local_c = 0xb;
    puStack_24 = &stack0xfffffffc;
    local_10 = param_1;
    FUN_0040a894((byte *)"%s: %s",&local_18,1,(int *)&local_8);
    piVar1 = FUN_0040ceec((int *)&DAT_00461aa8,'\x01',local_8);
    FUN_0040382c(piVar1);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_00466e1a;
  puStack_28 = (undefined1 *)0x466e12;
  FUN_00403db0((int *)&local_8);
  return;
}

