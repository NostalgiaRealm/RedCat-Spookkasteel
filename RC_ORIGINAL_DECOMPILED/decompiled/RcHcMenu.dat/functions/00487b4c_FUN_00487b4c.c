/*
 * FUN_00487b4c at 00487b4c
 * undefined __register FUN_00487b4c(int * param_1, int * param_2)
 * Address ranges: 00487b4c-00487bf2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 19 for TDBDataSet. Original bytes unchanged; names and types still inferred.
 */

/* WARNING: Removing unreachable block (ram,0x00487bba) */
/* Recovered original virtual function entry from validated Delphi VMT 0x47e718 slot 19 for
   TDBDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_00487b4c(int *param_1,int *param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x487b6b;
  uVar1 = (**(code **)(*param_1 + 0x268))(param_1,10,1);
  puStack_20 = &LAB_00487bf3;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00403db0(param_2);
  cVar2 = (**(code **)(*param_1 + 0x60))();
  if (cVar2 == '\0') {
    FUN_00403e04(param_2,(undefined4 *)&DAT_00487c08);
  }
  else {
    thunk_FUN_00479000(*(undefined4 *)(param_1[0x8b] + 0x70));
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00487bfa;
  puStack_20 = (undefined1 *)0x487bf2;
  (**(code **)(*param_1 + 0x268))(param_1,10,uVar1);
  return;
}

