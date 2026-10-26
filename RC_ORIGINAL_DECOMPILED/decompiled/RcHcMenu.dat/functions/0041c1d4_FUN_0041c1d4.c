/*
 * FUN_0041c1d4 at 0041c1d4
 * undefined __register FUN_0041c1d4(int * param_1, int * param_2)
 * Address ranges: 0041c1d4-0041c246;0041c26b-0041c27a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41a6d0 slot 2 for TBrush. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41a6d0 slot 2 for TBrush.
   Original bytes unchanged; names and types still inferred. */

void FUN_0041c1d4(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x41c1ef;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041a6d0);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x41c1fb;
    FUN_0041b6cc((int)param_1);
    puStack_18 = &LAB_0041c264;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x41c213;
    puStack_14 = &stack0xfffffffc;
    FUN_0041b6cc((int)param_2);
    puStack_24 = &LAB_0041c247;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_0041b1ac(DAT_005736a4,param_1,(undefined4 *)param_2[4]);
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_0041c24e;
    puStack_24 = (undefined1 *)0x41c246;
    FUN_0041b6dc((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x41c276;
  FUN_00412a74(param_1,param_2);
  return;
}

