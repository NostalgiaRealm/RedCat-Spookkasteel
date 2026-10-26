/*
 * FUN_00487474 at 00487474
 * undefined __register FUN_00487474(int param_1)
 * Address ranges: 00487474-00487528
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e3e4 slot 122 for TNestedTable. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47e3e4 slot 122 for
   TNestedTable. Original bytes unchanged; names and types still inferred. */

void FUN_00487474(int param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_38;
  int iVar3;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  byte *local_14;
  int local_10;
  int local_c;
  undefined1 local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_10 = 0;
  local_14 = (byte *)0x0;
  puStack_24 = &LAB_00487529;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puVar1 = &stack0xfffffffc;
  if ((*(char *)(*(int *)(param_1 + 0x78) + 0x34) == '\x1c') &&
     (puVar1 = &stack0xfffffffc, *(char *)(param_1 + 0x8d) == '\x03')) {
    puVar1 = &stack0xfffffffc;
    if (*(int *)(*(int *)(param_1 + 0x78) + 0xf8) == 0) {
      iVar3 = 0;
      FUN_004692f8(*(int *)(param_1 + 0x78),&local_10);
      local_c = local_10;
      local_8 = 0xb;
      FUN_00406a48((undefined4 *)PTR_PTR_0057238c,(int *)&local_14);
      FUN_00466e30(local_14,&local_c,0,iVar3);
      puVar1 = puStack_20;
    }
    puStack_20 = puVar1;
    FUN_004041f4(*(undefined **)(*(int *)(param_1 + 0x78) + 0xf8));
    uStackY_38 = *(undefined4 *)(param_1 + 0x168);
    uVar2 = thunk_FUN_00478ffa(uStackY_38);
    FUN_0047fe48(uVar2);
    puVar1 = puStack_20;
  }
  puStack_20 = puVar1;
  FUN_004854c4(param_1);
  *in_FS_OFFSET = uStackY_38;
  FUN_00403dd4((int *)&local_14,2);
  return;
}

