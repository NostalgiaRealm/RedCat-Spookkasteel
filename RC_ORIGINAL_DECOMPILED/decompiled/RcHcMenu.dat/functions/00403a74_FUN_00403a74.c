/*
 * FUN_00403a74 at 00403a74
 * undefined __register FUN_00403a74(void)
 * Address ranges: 00403a74-00403ab9;00403ace-00403ad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403a74(void)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  iVar3 = DAT_005734b0;
  puStack_14 = &stack0xfffffffc;
  if (DAT_005734ac != 0) {
    iVar1 = *(int *)(DAT_005734ac + 4);
    puStack_18 = &LAB_00403aba;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    while (0 < iVar3) {
      iVar3 = iVar3 + -1;
      pcVar2 = *(code **)(iVar1 + 4 + iVar3 * 8);
      DAT_005734b0 = iVar3;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)();
      }
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

