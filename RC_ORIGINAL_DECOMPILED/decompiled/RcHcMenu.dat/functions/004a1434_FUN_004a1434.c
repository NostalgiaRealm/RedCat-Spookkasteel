/*
 * FUN_004a1434 at 004a1434
 * undefined __register FUN_004a1434(int * param_1, int * param_2)
 * Address ranges: 004a1434-004a14d9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x4a0d80 slot 2 for TDaviLinkedGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x4a0d80 slot 2 for
   TDaviLinkedGraphic. Original bytes unchanged; names and types still inferred. */

void FUN_004a1434(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004a0d80);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041a91c);
    if ((char)uVar1 == '\0') {
      FUN_00412a74(param_1,param_2);
    }
    else {
      (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],param_2);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
    }
  }
  else {
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_004a0d80);
    FUN_00403e04(param_1 + 2,*(undefined4 **)(iVar2 + 8));
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar2 + 4);
    (**(code **)(*(int *)param_1[3] + 8))((int *)param_1[3],*(undefined4 *)(iVar2 + 0xc));
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  return;
}

