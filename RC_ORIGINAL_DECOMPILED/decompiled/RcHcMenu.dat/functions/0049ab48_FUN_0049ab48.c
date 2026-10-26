/*
 * FUN_0049ab48 at 0049ab48
 * undefined __register FUN_0049ab48(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 0049ab48-0049ab99;0049abb1-0049abcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049ab48(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  if (*(char *)(*(int *)(param_1 + 0x24) + 0x42c) != '\0') {
    puStack_1c = (undefined1 *)0x49ab6f;
    piVar1 = FUN_004990a4((int *)&PTR_FUN_004988dc,'\x01',param_3);
    puStack_20 = &LAB_0049ab9a;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00499ba4(piVar1,*(int *)(param_1 + 0x24),0);
    *in_FS_OFFSET = uStack_24;
    *(undefined1 *)(piVar1 + 0x10b) = 1;
    puStack_1c = (undefined1 *)0x49abc6;
    FUN_0049b6c0(param_1,(int)piVar1);
  }
  return;
}

