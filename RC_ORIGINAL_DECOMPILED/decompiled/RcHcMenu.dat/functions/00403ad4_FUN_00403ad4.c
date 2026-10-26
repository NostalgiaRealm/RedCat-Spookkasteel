/*
 * FUN_00403ad4 at 00403ad4
 * undefined __register FUN_00403ad4(void)
 * Address ranges: 00403ad4-00403b19;00403b2e-00403b32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00403ad4(void)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  if (DAT_005734ac != (int *)0x0) {
    iVar1 = *DAT_005734ac;
    iVar4 = 0;
    iVar2 = DAT_005734ac[1];
    puStack_18 = &LAB_00403b1a;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    if (0 < iVar1) {
      do {
        pcVar3 = *(code **)(iVar2 + iVar4 * 8);
        iVar4 = iVar4 + 1;
        DAT_005734b0 = iVar4;
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)();
        }
      } while (iVar4 < iVar1);
    }
    *in_FS_OFFSET = uStack_1c;
  }
  return;
}

