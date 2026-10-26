/*
 * FUN_0044dc80 at 0044dc80
 * undefined __register FUN_0044dc80(int * param_1)
 * Address ranges: 0044dc80-0044dced
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 44 for TCustomForm. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x446c28 slot 44 for
   TCustomForm. Original bytes unchanged; names and types still inferred. */

void FUN_0044dc80(int *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  undefined4 *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_8 = (undefined4 *)0x0;
  puStack_14 = &LAB_0044dcee;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  if (*(char *)((int)param_1 + 0x216) != '\0') goto LAB_0044dcd8;
  puVar1 = &stack0xfffffffc;
  if (*(char *)((int)param_1 + 0x47) == '\0') {
LAB_0044dcb0:
    puStack_10 = puVar1;
    FUN_00406a48((undefined4 *)PTR_PTR_00572520,(int *)&local_8);
    piVar3 = FUN_0040ceec((int *)&DAT_0041071c,'\x01',local_8);
    FUN_0040382c(piVar3);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x4c))();
    puVar1 = puStack_10;
    if (cVar2 == '\0') goto LAB_0044dcb0;
  }
  FUN_0044c604(param_1);
LAB_0044dcd8:
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0044dcf5;
  puStack_14 = (undefined1 *)0x44dced;
  FUN_00403db0((int *)&local_8);
  return;
}

