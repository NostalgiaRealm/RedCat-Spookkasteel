/*
 * FUN_0049b3d4 at 0049b3d4
 * undefined __register FUN_0049b3d4(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0049b3d4-0049b420;0049b438-0049b454
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 12 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 12 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049b3d4(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x49b3ef;
  piVar1 = FUN_004990a4((int *)&PTR_FUN_004988dc,'\x01',param_3);
  puStack_24 = &LAB_0049b421;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_20 = &stack0xfffffffc;
  FUN_00499dac(piVar1,param_2,*(char *)(param_1[9] + 0x42c));
  *in_FS_OFFSET = uStack_28;
  puStack_20 = (undefined1 *)0x49b443;
  FUN_0049b6c0((int)param_1,(int)piVar1);
  puStack_20 = (undefined1 *)0x49b44e;
  (**(code **)(*param_1 + 0x10))(param_1,param_1);
  return;
}

