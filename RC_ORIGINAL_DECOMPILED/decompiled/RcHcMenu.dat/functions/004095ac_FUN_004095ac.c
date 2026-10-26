/*
 * FUN_004095ac at 004095ac
 * undefined __register FUN_004095ac(undefined4 * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 004095ac-004095fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004095ac(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_1c = &LAB_004095fe;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  FUN_00406a48(param_1,(int *)&local_8);
  uVar1 = FUN_0040cf28((int)&DAT_0040911c,'\x01',local_8,param_3,param_2);
  FUN_0040382c(uVar1);
  *in_FS_OFFSET = param_3;
  puStack_20 = &LAB_00409605;
  FUN_00403db0((int *)&local_8);
  return;
}

