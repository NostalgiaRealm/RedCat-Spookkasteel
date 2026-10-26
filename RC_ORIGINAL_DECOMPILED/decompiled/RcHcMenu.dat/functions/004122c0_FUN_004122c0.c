/*
 * FUN_004122c0 at 004122c0
 * undefined __register FUN_004122c0(undefined4 param_1, undefined4 * param_2, undefined4 param_3)
 * Address ranges: 004122c0-00412307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004122c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  byte *local_8;
  
  puStack_14 = &stack0xfffffffc;
  local_8 = (byte *)0x0;
  puStack_18 = &LAB_00412308;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  FUN_00406a48(param_2,(int *)&local_8);
  FUN_00412288(&PTR_FUN_0041077c,local_8,param_3);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_0041230f;
  puStack_18 = (undefined1 *)0x412307;
  FUN_00403db0((int *)&local_8);
  return;
}

