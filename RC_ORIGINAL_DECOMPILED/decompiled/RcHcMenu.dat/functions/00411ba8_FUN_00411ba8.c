/*
 * FUN_00411ba8 at 00411ba8
 * undefined4 __register FUN_00411ba8(int param_1)
 * Address ranges: 00411ba8-00411c17;00411c1f-00411c28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00411ba8(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x411bc3;
  puVar1 = (undefined4 *)FUN_00412824(DAT_0057362c);
  puStack_20 = &LAB_00411c18;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar4 = puVar1[2];
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar2 = FUN_00412384(puVar1,iVar5);
      if (*(int *)(iVar2 + 4) == param_1) {
        uVar3 = *(undefined4 *)(iVar2 + 8);
        FUN_004038cc();
        return uVar3;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x411c1f;
  puStack_20 = (undefined1 *)0x411c17;
  uVar3 = FUN_00412888(DAT_0057362c);
  return uVar3;
}

