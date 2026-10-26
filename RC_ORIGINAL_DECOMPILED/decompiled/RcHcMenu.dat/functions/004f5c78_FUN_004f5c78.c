/*
 * FUN_004f5c78 at 004f5c78
 * undefined __register FUN_004f5c78(int * param_1)
 * Address ranges: 004f5c78-004f5cba;004f5cd6-004f5cfd;004f5d17-004f5d1c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5c78(int *param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  
  puStack_18 = (undefined1 *)0x4f5c8a;
  FUN_00437ef0((int)param_1);
  if ((char)param_1[0x5a] == '\0') {
    puStack_1c = &LAB_004f5cfe;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    *in_FS_OFFSET = uStack_20;
  }
  else {
    puStack_1c = &LAB_004f5cbb;
    uStack_20 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_20;
    puStack_18 = &stack0xfffffffc;
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
    *in_FS_OFFSET = uStack_20;
  }
  return;
}

