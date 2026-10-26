/*
 * FUN_004189d4 at 004189d4
 * undefined __register FUN_004189d4(void)
 * Address ranges: 004189d4-00418a4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004189d4(void)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  _union_2683 local_14;
  
  puStack_1c = &stack0xfffffffc;
  local_14._12_4_ = 0;
  local_14._8_4_ = 0;
  local_14.decVal.Hi32 = 0;
  local_14._0_4_ = 0;
  puStack_20 = &LAB_00418a50;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  uVar1 = FUN_00417f94();
  if ((char)uVar1 == '\0') {
    FUN_00405c08((short *)(in_stack_00000004 + -0x10));
  }
  else {
    FUN_0040ff18(*(int **)(*(int *)(*(int *)(in_stack_00000004 + 8) + -4) + 0x20),
                 *(int *)(*(int *)(in_stack_00000004 + 8) + -0xc),(VARIANT *)&local_14.n2);
    FUN_00405abc((VARIANTARG *)(in_stack_00000004 + -0x10),(VARIANTARG *)&local_14.n2);
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00418a57;
  puStack_20 = (undefined1 *)0x418a4f;
  FUN_00405bcc((VARIANTARG *)&local_14.n2);
  return;
}

