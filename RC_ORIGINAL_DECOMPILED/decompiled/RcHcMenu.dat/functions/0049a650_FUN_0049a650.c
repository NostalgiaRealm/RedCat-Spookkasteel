/*
 * FUN_0049a650 at 0049a650
 * undefined __register FUN_0049a650(int * param_1, int * param_2, undefined4 param_3)
 * Address ranges: 0049a650-0049a75e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 2 for TDIB. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x49893c slot 2 for TDIB.
   Original bytes unchanged; names and types still inferred. */

void FUN_0049a650(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  
  if (param_2 == (int *)0x0) {
    FUN_0049aa40(param_1,0,param_3);
    (**(code **)(*param_1 + 0x10))(param_1,param_1);
  }
  else {
    uVar1 = FUN_0040320c(param_2,(int)&LAB_0049893c);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041a91c);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
        if ((char)uVar1 == '\0') {
          FUN_00412a74(param_1,param_2);
        }
        else {
          if (param_2[1] == 0) {
            FUN_0049aa40(param_1,extraout_EDX_00,extraout_ECX_00);
          }
          else {
            FUN_0049a5b8((int *)param_2[1],extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
          }
          (**(code **)(*param_1 + 0x10))(param_1,param_1);
        }
      }
      else {
        FUN_0049a5b8(param_2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
        (**(code **)(*param_1 + 0x10))(param_1,param_1);
      }
    }
    else if (param_2 != param_1) {
      FUN_0049b6c0((int)param_1,param_2[9]);
      (**(code **)(*param_1 + 0x10))(param_1,param_1);
      uVar1 = (**(code **)(*param_2 + 0x28))();
      (**(code **)(*param_1 + 0x3c))(param_1,uVar1);
      uVar2 = FUN_0049af2c((int)param_2);
      FUN_0049b988(param_1,uVar2);
      FUN_0049b9c0(param_1,(char)param_2[0x22]);
    }
  }
  return;
}

