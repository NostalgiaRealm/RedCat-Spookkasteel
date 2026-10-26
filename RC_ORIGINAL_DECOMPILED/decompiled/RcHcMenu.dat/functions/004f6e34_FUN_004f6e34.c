/*
 * FUN_004f6e34 at 004f6e34
 * undefined __register FUN_004f6e34(void)
 * Address ranges: 004f6e34-004f6ebb;004f6ee2-004f6ee4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6e34(void)

{
  int *piVar1;
  uint extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  undefined4 uStackY_14;
  undefined1 *puStackY_10;
  
  if (*(int *)(*(int *)(in_stack_00000004 + -4) + 500) != 0) {
    FUN_00412f38(*(int **)(*(int *)(in_stack_00000004 + -4) + 0x1f0));
    puStackY_10 = (undefined1 *)0x4f6e79;
    piVar1 = FUN_00414e2c((int *)&PTR_FUN_00411230,'\x01',
                          *(int *)(*(int *)(in_stack_00000004 + -4) + 500),0x400);
    puStackY_10 = &LAB_004f6ebc;
    uStackY_14 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStackY_14;
    FUN_00417010((int)piVar1,extraout_EDX,extraout_ECX);
    FUN_0041598c((int)piVar1,*(int **)(*(int *)(in_stack_00000004 + -4) + 0x1f0));
    *in_FS_OFFSET = uStackY_14;
    puStackY_10 = (undefined1 *)0x4f6ebb;
    FUN_00403094(piVar1);
    return;
  }
  return;
}

