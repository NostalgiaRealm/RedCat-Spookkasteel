/*
 * FUN_00419b54 at 00419b54
 * undefined4 __register FUN_00419b54(void)
 * Address ranges: 00419b54-00419b9c;00419bac-00419bb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x411144 slot 3 for TStreamAdapter. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x411144 slot 3 for
   TStreamAdapter. Original bytes unchanged; names and types still inferred. */

undefined4 FUN_00419b54(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = &stack0xfffffffc;
  puStack_18 = &LAB_00419b9d;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  (**(code **)**(undefined4 **)(in_stack_00000004 + 0xc))
            (*(undefined4 **)(in_stack_00000004 + 0xc),in_stack_00000008);
  iVar1 = FUN_004147cc(*(int **)(in_stack_00000004 + 0xc));
  if (iVar1 >> 0x1f == in_stack_0000000c && iVar1 == in_stack_00000008) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x80004005;
  }
  *in_FS_OFFSET = uStack_1c;
  return uVar2;
}

