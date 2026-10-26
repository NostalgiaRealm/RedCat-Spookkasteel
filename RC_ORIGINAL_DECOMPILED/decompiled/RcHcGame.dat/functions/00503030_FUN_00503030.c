/*
 * FUN_00503030 at 00503030
 * undefined FUN_00503030(void)
 * Address ranges: 00503030-0050308f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00503030(int *param_1)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00635c00;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  if ((code *)param_1[0x3c] != (code *)0x0) {
    (*(code *)param_1[0x3c])(param_1);
    *unaff_FS_OFFSET = local_10;
    return;
  }
  (**(code **)(*param_1 + 0xc))();
  *unaff_FS_OFFSET = local_10;
  return;
}

