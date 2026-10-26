/*
 * FUN_0041563c at 0041563c
 * undefined __register FUN_0041563c(int param_1)
 * Address ranges: 0041563c-004156ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041563c(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x41564e;
  piVar1 = (int *)FUN_00412824(DAT_00573630);
  puStack_18 = &LAB_004156ac;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = piVar1[2] + -1;
  puStack_14 = &stack0xfffffffc;
  if (-1 < iVar3) {
    do {
      piVar2 = (int *)FUN_00412384(piVar1,iVar3);
      if ((piVar2[1] == *(int *)(param_1 + 4)) && (piVar2[3] == *(int *)(param_1 + 0xc))) {
        FUN_00403094(piVar2);
        FUN_00412224(piVar1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004156b3;
  puStack_18 = (undefined1 *)0x4156ab;
  FUN_00412888(DAT_00573630);
  return;
}

