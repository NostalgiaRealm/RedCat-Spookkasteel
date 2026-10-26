/*
 * FUN_0047172c at 0047172c
 * undefined __register FUN_0047172c(int * param_1)
 * Address ranges: 0047172c-00471793;0047179b-0047179e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 85 for TDataSet. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4667a0 slot 85 for
   TDataSet. Original bytes unchanged; names and types still inferred. */

void FUN_0047172c(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x47173f;
  cVar2 = (**(code **)(*param_1 + 0x1f0))();
  if ((cVar2 == '\0') && ((param_1[0x18] == 0 || (*(char *)(param_1[0x18] + 8) == '\0')))) {
    puStack_14 = &LAB_00471794;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x16c))(param_1,1);
    puVar1 = puStack_10;
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x47179b;
    puStack_14 = (undefined1 *)0x471793;
    (**(code **)(*param_1 + 0x9c))(param_1,*param_1,puVar1);
    return;
  }
  puStack_10 = (undefined1 *)0x47175e;
  (**(code **)(*param_1 + 0x1d8))();
  return;
}

