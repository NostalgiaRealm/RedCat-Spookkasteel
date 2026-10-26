/*
 * FUN_004803e0 at 004803e0
 * undefined __register FUN_004803e0(int param_1)
 * Address ranges: 004803e0-00480439
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004803e0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x4803f4;
  puVar1 = (undefined4 *)FUN_00412824(*(int *)(param_1 + 4));
  puStack_18 = &LAB_0048043a;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  iVar3 = puVar1[2] + -1;
  puStack_14 = &stack0xfffffffc;
  if (-1 < iVar3) {
    do {
      piVar2 = (int *)FUN_00412384(puVar1,iVar3);
      FUN_00403094(piVar2);
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00480441;
  puStack_18 = (undefined1 *)0x480439;
  FUN_00412888(*(int *)(param_1 + 4));
  return;
}

