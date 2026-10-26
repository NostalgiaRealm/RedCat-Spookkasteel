/*
 * FUN_004edabc at 004edabc
 * undefined __register FUN_004edabc(uint param_1)
 * Address ranges: 004edabc-004edb81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004edabc(uint param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  int *local_10;
  uint local_8;
  
  puStack_14 = (undefined1 *)0x4edacd;
  local_8 = param_1;
  FUN_004ee6d4(param_1);
  *(undefined1 *)(local_8 + 8) = 0;
  puStack_14 = (undefined1 *)0x4edadf;
  uVar1 = FUN_004cf1d0(*(int **)(local_8 + 0xc));
  puStack_14 = (undefined1 *)0x4edaef;
  uVar1 = FUN_004cf3c8(*(int **)(local_8 + 0xc),(byte)uVar1 ^ 1);
  *(undefined4 *)(local_8 + 0x24) = uVar1;
  *(undefined1 *)(local_8 + 0x35) = 0;
  puStack_14 = (undefined1 *)0x4edb07;
  local_10 = FUN_004cf39c(*(int **)(local_8 + 0xc),local_8,extraout_ECX);
  puStack_18 = &LAB_004edb82;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  FUN_004b51e8((int)local_10);
  FUN_004b49b8(local_10,*(int *)(local_8 + 0x10));
  *(undefined1 *)(local_10 + 9) = *(undefined1 *)(local_8 + 0x18);
  local_10[0xf] = *(int *)(local_8 + 0x1c);
  FUN_004b4e70((int)local_10,*(int **)(local_8 + 0x28));
  FUN_004b4f0c(local_10,0);
  FUN_004d69fc(*(int **)(local_8 + 0x24),(int)local_10);
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_004edb89;
  puStack_18 = (undefined1 *)0x4edb81;
  FUN_00403094(local_10);
  return;
}

