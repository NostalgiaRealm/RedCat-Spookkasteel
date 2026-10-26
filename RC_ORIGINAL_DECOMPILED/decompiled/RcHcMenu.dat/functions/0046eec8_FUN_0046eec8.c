/*
 * FUN_0046eec8 at 0046eec8
 * undefined __register FUN_0046eec8(int * param_1, int * param_2)
 * Address ranges: 0046eec8-0046ef0e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046eec8(int *param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_00466014);
  if ((char)uVar1 == '\0') {
    FUN_00412a74(param_1,param_2);
  }
  else {
    FUN_0046ef40((int)param_1,(uint *)param_2[3]);
    FUN_0046ef68((int)param_1,(uint *)param_2[4]);
    FUN_0046ef90((int)param_1,(uint *)param_2[5]);
  }
  return;
}

