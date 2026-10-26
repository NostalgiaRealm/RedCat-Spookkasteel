/*
 * FUN_0049ef40 at 0049ef40
 * undefined __register FUN_0049ef40(int * param_1, int * param_2)
 * Address ranges: 0049ef40-0049efc0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49e980 slot 2 for TDaviAnimationProperties. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49e980 slot 2 for
   TDaviAnimationProperties. Original bytes unchanged; names and types still inferred. */

void FUN_0049ef40(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0049e980);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_0049e980);
    param_1[1] = *(int *)(iVar2 + 4);
    param_1[2] = *(int *)(iVar2 + 8);
    param_1[3] = *(int *)(iVar2 + 0xc);
    param_1[4] = *(int *)(iVar2 + 0x10);
    (**(code **)(*(int *)param_1[5] + 8))((int *)param_1[5],*(undefined4 *)(iVar2 + 0x14));
  }
  return;
}

