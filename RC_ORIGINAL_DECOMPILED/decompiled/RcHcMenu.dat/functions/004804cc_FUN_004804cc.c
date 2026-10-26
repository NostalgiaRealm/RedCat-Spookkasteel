/*
 * FUN_004804cc at 004804cc
 * int __register FUN_004804cc(int param_1, undefined * param_2)
 * Address ranges: 004804cc-00480557;0048055f-00480568
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004804cc(int param_1,undefined *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 == (undefined *)0x0) {
    return DAT_00573948;
  }
  puStack_20 = (undefined1 *)0x4804f6;
  puVar1 = (undefined4 *)FUN_00412824(*(int *)(param_1 + 4));
  puStack_24 = &LAB_00480558;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iVar4 = puVar1[2];
  if (-1 < iVar4 + -1) {
    iVar5 = 0;
    puStack_20 = &stack0xfffffffc;
    do {
      iVar2 = FUN_00412384(puVar1,iVar5);
      iVar3 = FUN_00409870(*(undefined **)(iVar2 + 0x48),param_2);
      if (iVar3 == 0) {
        FUN_004038cc();
        return iVar2;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x48055f;
  puStack_24 = (undefined1 *)0x480557;
  iVar4 = FUN_00412888(*(int *)(param_1 + 4));
  return iVar4;
}

