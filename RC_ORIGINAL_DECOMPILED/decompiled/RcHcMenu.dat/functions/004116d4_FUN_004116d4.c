/*
 * FUN_004116d4 at 004116d4
 * int __register FUN_004116d4(int param_1)
 * Address ranges: 004116d4-00411770;00411778-00411781
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004116d4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x4116ea;
  puVar2 = (undefined4 *)FUN_00412824(DAT_00573624);
  puStack_20 = &LAB_00411771;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar5 = puVar2[2];
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = FUN_00412384(puVar2,iVar4);
      cVar1 = FUN_00402ff4(iVar3,param_1);
      if (cVar1 != '\0') {
        FUN_004038cc();
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = (**(code **)(*DAT_00573628 + 0x50))(DAT_00573628,param_1);
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*DAT_00573628 + 0x18))(DAT_00573628,iVar5);
    FUN_004038cc();
    return iVar5;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x411778;
  puStack_20 = (undefined1 *)0x411770;
  iVar5 = FUN_00412888(DAT_00573624);
  return iVar5;
}

