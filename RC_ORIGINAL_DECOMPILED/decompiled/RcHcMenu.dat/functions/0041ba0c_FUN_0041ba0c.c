/*
 * FUN_0041ba0c at 0041ba0c
 * undefined __register FUN_0041ba0c(int * param_1, int * param_2)
 * Address ranges: 0041ba0c-0041baa9;0041bace-0041badd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41a454 slot 2 for TFont. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41a454 slot 2 for TFont.
   Original bytes unchanged; names and types still inferred. */

void FUN_0041ba0c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x41ba27;
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041a454);
  if ((char)uVar1 != '\0') {
    puStack_14 = (undefined1 *)0x41ba37;
    FUN_0041b6cc((int)param_1);
    puStack_18 = &LAB_0041bac7;
    uStack_1c = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_1c;
    puStack_20 = (undefined1 *)0x41ba4f;
    puStack_14 = &stack0xfffffffc;
    FUN_0041b6cc((int)param_2);
    puStack_24 = &LAB_0041baaa;
    uStack_28 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_28;
    puStack_20 = &stack0xfffffffc;
    FUN_0041b1ac(DAT_0057369c,param_1,(undefined4 *)param_2[4]);
    FUN_0041bb48(param_1,param_2[6],extraout_ECX);
    if (param_1[7] != param_2[7]) {
      iVar2 = FUN_0041bdcc((int)param_2);
      FUN_0041bde8(param_1,iVar2);
    }
    *in_FS_OFFSET = uStack_28;
    puStack_20 = &LAB_0041bab1;
    puStack_24 = (undefined1 *)0x41baa9;
    FUN_0041b6dc((int)param_2);
    return;
  }
  puStack_14 = (undefined1 *)0x41bad9;
  FUN_00412a74(param_1,param_2);
  return;
}

