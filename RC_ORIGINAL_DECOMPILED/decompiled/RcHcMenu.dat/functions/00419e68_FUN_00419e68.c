/*
 * FUN_00419e68 at 00419e68
 * undefined __register FUN_00419e68(void)
 * Address ranges: 00419e68-00419ebc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00419e68(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x419e78;
  puVar1 = (undefined4 *)FUN_00412824(DAT_0057362c);
  puStack_18 = &LAB_00419ebd;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = puVar1[2];
  if (-1 < iVar3 + -1) {
    iVar4 = 0;
    puStack_14 = &stack0xfffffffc;
    do {
      piVar2 = (int *)FUN_00412384(puVar1,iVar4);
      FUN_00403094(piVar2);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00419ec4;
  puStack_18 = (undefined1 *)0x419ebc;
  FUN_00412888(DAT_0057362c);
  return;
}

