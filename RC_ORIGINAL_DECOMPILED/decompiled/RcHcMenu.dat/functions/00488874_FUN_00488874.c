/*
 * FUN_00488874 at 00488874
 * undefined __register FUN_00488874(int * param_1)
 * Address ranges: 00488874-004888e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00488874(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x488884;
  FUN_00472928((int)param_1);
  puStack_14 = &LAB_004888e3;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if ((*(int *)(param_1[0x92] + 4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1[0x92] + 4) + 0x24), iVar1 != 0)) {
    puStack_10 = &stack0xfffffffc;
    uVar2 = FUN_004714b4(iVar1);
    if (((char)uVar2 != '\0') && (*(char *)(iVar1 + 0x8d) != '\x04')) {
      FUN_004713cc(param_1);
      FUN_004713c0(param_1);
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004888ea;
  puStack_14 = (undefined1 *)0x4888e2;
  FUN_00472948(param_1);
  return;
}

