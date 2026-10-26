/*
 * FUN_0040696c at 0040696c
 * undefined __register FUN_0040696c(undefined4 param_1, undefined4 param_2, undefined1 * param_3)
 * Address ranges: 0040696c-004069a6;004069b1-004069c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040696c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  for (puVar1 = DAT_0056f020; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    puStack_20 = &LAB_004069a7;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    (*(code *)puVar1[1])(param_1,param_2,param_3);
    *in_FS_OFFSET = uStack_24;
    param_2 = uStack_24;
    param_3 = puStack_1c;
  }
  return;
}

