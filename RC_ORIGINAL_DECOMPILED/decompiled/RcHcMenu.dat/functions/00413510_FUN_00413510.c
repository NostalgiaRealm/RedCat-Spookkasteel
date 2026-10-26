/*
 * FUN_00413510 at 00413510
 * undefined __register FUN_00413510(int * param_1, int * param_2)
 * Address ranges: 00413510-00413568;00413570-0041357d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 2 for TStrings. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x410b88 slot 2 for TStrings.
   Original bytes unchanged; names and types still inferred. */

void FUN_00413510(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  
  puStack_10 = (undefined1 *)0x413527;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00410b88);
  if ((char)uVar1 != '\0') {
    puStack_10 = (undefined1 *)0x413533;
    FUN_00413580(param_1);
    puStack_14 = &LAB_00413569;
    uStack_18 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_18;
    puStack_10 = &stack0xfffffffc;
    (**(code **)(*param_1 + 0x40))();
    (**(code **)(*param_1 + 0x3c))(param_1,param_2);
    *in_FS_OFFSET = uStack_18;
    puStack_10 = (undefined1 *)0x41357a;
    puStack_14 = (undefined1 *)0x413568;
    FUN_0041363c(param_1);
    return;
  }
  puStack_10 = (undefined1 *)0x41357a;
  FUN_00412a74(param_1,param_2);
  return;
}

