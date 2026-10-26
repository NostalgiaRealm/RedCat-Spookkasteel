/*
 * FUN_00411668 at 00411668
 * undefined __register FUN_00411668(undefined4 param_1)
 * Address ranges: 00411668-004116c7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411668(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte *local_10;
  undefined4 local_c;
  undefined1 local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_10 = (byte *)0x0;
  puStack_1c = &LAB_004116c8;
  puStack_20 = (undefined1 *)*in_FS_OFFSET;
  *in_FS_OFFSET = &puStack_20;
  local_8 = 0xb;
  puVar3 = &local_c;
  uVar2 = 0;
  local_c = param_1;
  FUN_00406a48((undefined4 *)PTR_PTR_00572538,(int *)&local_10);
  uVar1 = FUN_0040cf28((int)&DAT_0041049c,'\x01',local_10,uVar2,puVar3);
  FUN_0040382c(uVar1);
  *in_FS_OFFSET = uVar2;
  puStack_20 = &LAB_004116cf;
  FUN_00403db0((int *)&local_10);
  return;
}

