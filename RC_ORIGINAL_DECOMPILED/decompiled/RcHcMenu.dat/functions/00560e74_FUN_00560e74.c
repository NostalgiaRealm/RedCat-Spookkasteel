/*
 * FUN_00560e74 at 00560e74
 * undefined __register FUN_00560e74(undefined4 param_1, int * param_2, undefined4 param_3, undefined4 * param_4)
 * Address ranges: 00560e74-00560ef3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot published:defQRBtnGetCaptionRect for TfrmMainScreen. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x5601a8 slot
   published:defQRBtnGetCaptionRect for TfrmMainScreen. Original bytes unchanged; names and types
   still inferred. */

void FUN_00560e74(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_ECX;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_004a1a64);
  if ((char)uVar1 == '\0') {
    FUN_00403d94("Assertion failure");
  }
  uVar2 = FUN_00403224(param_2,(int)&PTR_FUN_004a1a64);
  uVar3 = *(int *)(uVar2 + 0x48) - 5;
  if (SBORROW4(*(int *)(uVar2 + 0x48),5)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  iVar4 = *(int *)(uVar2 + 0x44) + -10;
  if (SBORROW4(*(int *)(uVar2 + 0x44),10)) {
    thunk_FUN_00402874(uVar2);
    iVar4 = extraout_ECX;
  }
  FUN_00411624(10,0x91,iVar4,param_4,uVar3);
  return;
}

