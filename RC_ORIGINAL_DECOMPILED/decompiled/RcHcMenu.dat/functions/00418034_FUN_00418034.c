/*
 * FUN_00418034 at 00418034
 * undefined __register FUN_00418034(uint param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00418034-004180b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418034(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint uVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined *local_8;
  
  puStack_18 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_1c = &LAB_004180ba;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  iVar2 = FUN_0040f7bc(*(int *)(param_4 + -0x10));
  pcVar1 = (char *)**(undefined4 **)(iVar2 + 1);
  FUN_00418ed0(*(int *)(param_4 + -4),0xb,extraout_ECX);
  uVar4 = 0;
  uVar3 = extraout_ECX_00;
  do {
    bVar5 = uVar4 < 0x1f;
    if (uVar4 < 0x20) {
      bVar5 = (param_1 >> (uVar4 & 0x1f) & 1) != 0;
    }
    if (bVar5) {
      FUN_0040f7c8(pcVar1,uVar4,(int *)&local_8);
      FUN_00418df0(*(int *)(param_4 + -4),local_8,extraout_ECX_01);
      uVar3 = extraout_ECX_02;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0x20);
  FUN_00418df0(*(int *)(param_4 + -4),(undefined *)0x0,uVar3);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_004180c1;
  puStack_1c = (undefined1 *)0x4180b9;
  FUN_00403db0((int *)&local_8);
  return;
}

