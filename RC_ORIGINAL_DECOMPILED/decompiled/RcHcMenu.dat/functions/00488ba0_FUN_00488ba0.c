/*
 * FUN_00488ba0 at 00488ba0
 * undefined __register FUN_00488ba0(int param_1)
 * Address ranges: 00488ba0-00488cb2;00488cdb-00488ce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 156 for TQuery. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x47eb28 slot 156 for TQuery.
   Original bytes unchanged; names and types still inferred. */

void FUN_00488ba0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  iStack_18 = param_1 + 0x16c;
  uStack_1c = 2;
  uStack_20 = 0x488bbf;
  uStack_20 = FUN_00487734(param_1);
  puStack_24 = (undefined1 *)0x488bc5;
  uVar2 = thunk_FUN_00479a47(uStack_20);
  puStack_24 = (undefined1 *)0x488bca;
  FUN_0047fe48(uVar2);
  puStack_28 = &LAB_00488cb3;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puStack_24 = &stack0xfffffffc;
  if (*(char *)(param_1 + 0x25e) == '\0') {
    puStack_24 = &stack0xfffffffc;
    if (*(char *)(param_1 + 0x255) != '\0') {
      puStack_24 = &stack0xfffffffc;
      FUN_00486bc4(param_1);
    }
    uVar2 = thunk_FUN_00478ffa(*(undefined4 *)(param_1 + 0x16c));
    FUN_0047fe48(uVar2);
  }
  if (*(char *)(param_1 + 0x24c) != '\0') {
    FUN_0047fc9c(*(undefined4 *)(param_1 + 0x16c),0x60026,0);
    if ((*(char *)(param_1 + 0x255) != '\0') && (*(char *)(param_1 + 0x25c) != '\0')) {
      FUN_0047fc9c(*(undefined4 *)(param_1 + 0x16c),0x60031,0xffffffff);
    }
    FUN_0047fc9c(*(undefined4 *)(param_1 + 0x16c),0x60042,0xffffffff);
  }
  do {
    uVar1 = *(undefined4 *)(param_1 + 0x16c);
    uVar2 = thunk_FUN_00479a65(uVar1);
    uVar3 = FUN_004876d4(param_1,uVar2);
  } while ((char)uVar3 == '\0');
  *in_FS_OFFSET = uVar1;
  return;
}

