/*
 * FUN_00415364 at 00415364
 * undefined __register FUN_00415364(int param_1)
 * Address ranges: 00415364-004153da;004153e2-004153e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00415364(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  if (DAT_00573630 != 0) {
    puStack_18 = (undefined1 *)0x415381;
    piVar1 = (int *)FUN_00412824(DAT_00573630);
    puStack_1c = &LAB_004153db;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    iVar3 = piVar1[2] + -1;
    puStack_18 = &stack0xfffffffc;
    if (-1 < iVar3) {
      do {
        piVar2 = (int *)FUN_00412384(piVar1,iVar3);
        if (piVar2[1] == param_1) {
          FUN_00412224(piVar1,iVar3);
          FUN_00403094(piVar2);
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != -1);
    }
    *in_FS_OFFSET = uStack_20;
    puStack_18 = (undefined1 *)0x4153e2;
    puStack_1c = (undefined1 *)0x4153da;
    FUN_00412888(DAT_00573630);
    return;
  }
  return;
}

