/*
 * FUN_00434a90 at 00434a90
 * undefined __register FUN_00434a90(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00434a90-00434b53;00434b5b-00434b60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00434a90(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(int *)(param_1 + 0x180) != 0) {
    puStack_1c = (undefined1 *)0x434ab7;
    piVar2 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    puStack_20 = &LAB_00434b54;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    iVar5 = *(int *)(*(int *)(param_1 + 0x180) + 8);
    puStack_1c = &stack0xfffffffc;
    FUN_00412578(piVar2,iVar5);
    if (-1 < iVar5 + -1) {
      iVar6 = 0;
      iVar4 = iVar5;
      do {
        iVar3 = FUN_00412384(*(undefined4 **)(param_1 + 0x180),iVar6);
        iVar1 = *(int *)(iVar3 + 0x170);
        if ((-1 < iVar1) && (iVar1 < iVar5)) {
          FUN_004124d0(piVar2,iVar1,iVar3);
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    if (-1 < iVar5 + -1) {
      iVar4 = 0;
      do {
        iVar6 = FUN_00412384(piVar2,iVar4);
        if (iVar6 != 0) {
          FUN_00438b40(iVar6,(short)iVar4);
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    *in_FS_OFFSET = uStack_24;
    puStack_1c = (undefined1 *)0x434b5b;
    puStack_20 = (undefined1 *)0x434b53;
    FUN_00403094(piVar2);
    return;
  }
  return;
}

