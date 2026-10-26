/*
 * FUN_00480a40 at 00480a40
 * undefined __register FUN_00480a40(undefined4 param_1, byte * param_2, undefined4 param_3)
 * Address ranges: 00480a40-00480aaf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00480a40(undefined4 param_1,byte *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_34;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 local_10;
  undefined1 local_c;
  undefined *local_8;
  
  puStack_1c = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_20 = &LAB_00480ab0;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  local_c = 0xb;
  local_10 = param_3;
  FUN_0040a894(param_2,&local_10,0,(int *)&local_8);
  puVar1 = FUN_004041f4(local_8);
  uVar2 = thunk_FUN_00479865(puVar1);
  if ((short)uVar2 == 0) {
    uStackY_34 = 0;
    uVar3 = thunk_FUN_00479847(uVar2);
    FUN_0047fe48(uVar3);
  }
  *in_FS_OFFSET = uStackY_34;
  FUN_00403db0((int *)&local_8);
  return;
}

