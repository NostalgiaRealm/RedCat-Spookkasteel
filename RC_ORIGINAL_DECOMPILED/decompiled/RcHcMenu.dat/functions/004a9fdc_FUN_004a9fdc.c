/*
 * FUN_004a9fdc at 004a9fdc
 * undefined __register FUN_004a9fdc(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * Address ranges: 004a9fdc-004aa062
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a9fdc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  puStack_20 = &LAB_004aa063;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  bVar1 = false;
  iVar2 = FUN_004aa3d0(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      if (bVar1) {
LAB_004aa03a:
        bVar1 = true;
      }
      else {
        uVar4 = param_4;
        iVar3 = FUN_004aa3bc(param_1,iVar2);
        uVar4 = FUN_004a99f0(iVar3,param_2,param_3,uVar4);
        if ((char)uVar4 != '\0') goto LAB_004aa03a;
        bVar1 = false;
      }
    } while ((*(char *)(param_1 + 0x28) != '\0') && (iVar2 = iVar2 + -1, iVar2 != -1));
  }
  *in_FS_OFFSET = uStack_24;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}

