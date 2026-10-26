/*
 * FUN_004702e0 at 004702e0
 * undefined __register FUN_004702e0(int * param_1, int * param_2)
 * Address ranges: 004702e0-0047039b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004702e0(int *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0046627c);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00462a70);
    if ((char)uVar1 == '\0') {
      uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00410b88);
      if ((char)uVar1 == '\0') {
        uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041acd8);
        if ((char)uVar1 == '\0') {
          uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0041aa00);
          if (((char)uVar1 != '\0') &&
             (uVar1 = FUN_0040320c((int *)param_2[1],(int)&PTR_FUN_0041acd8), (char)uVar1 != '\0'))
          {
            FUN_00470230((int *)param_2[1],extraout_EDX_01,extraout_ECX_01,(int)&stack0xfffffffc);
            return;
          }
          FUN_00412a74(param_1,param_2);
        }
        else {
          FUN_00470230(param_2,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
        }
      }
      else {
        FUN_00470290(param_2,extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
      }
    }
    else {
      FUN_004704ac((int)param_1,param_2);
    }
  }
  else {
    FUN_004703d0((int)param_1,(int)param_2);
  }
  return;
}

