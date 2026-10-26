/*
 * FUN_00536270 at 00536270
 * int * __register FUN_00536270(int * param_1, char param_2, undefined4 param_3)
 * Address ranges: 00536270-005363a0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00536270(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  char extraout_DL;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffffe4;
  undefined4 in_stack_ffffffe8;
  
  cVar2 = '\0';
  if (param_2 != '\0') {
    param_1 = (int *)FUN_004033d4((int)param_1,param_2,param_3,in_stack_ffffffe4,in_stack_ffffffe8);
    param_3 = extraout_ECX;
    cVar2 = extraout_DL;
  }
  FUN_0045b418(param_1,'\0',param_3);
  piVar1 = FUN_0045b810((int *)&LAB_0045b7d8,'\x01',0);
  param_1[1] = (int)piVar1;
  FUN_00536428((int)param_1,(int)&LAB_0048a7d0,(int)&PTR_FUN_005348fc);
  FUN_00536428((int)param_1,(int)&LAB_0048c40c,(int)&PTR_FUN_005348fc);
  FUN_00536428((int)param_1,(int)&PTR_FUN_004e715c,(int)&PTR_FUN_0051437c);
  FUN_00536428((int)param_1,(int)&PTR_FUN_0048b2b4,(int)&PTR_FUN_0051437c);
  FUN_00536428((int)param_1,(int)&PTR_FUN_0048b6c0,(int)&PTR_FUN_0051437c);
  FUN_00536428((int)param_1,(int)&PTR_FUN_004e824c,(int)&PTR_FUN_00511694);
  FUN_00536428((int)param_1,(int)&PTR_FUN_004897ec,(int)&PTR_FUN_004ff028);
  FUN_00536428((int)param_1,(int)&LAB_004e9250,(int)&PTR_FUN_0050eddc);
  FUN_00536428((int)param_1,(int)&PTR_FUN_004b19f0,(int)&PTR_FUN_0050c17c);
  FUN_00536428((int)param_1,(int)&PTR_FUN_004f8ee4,(int)&PTR_FUN_00505868);
  FUN_00536428((int)param_1,(int)&PTR_FUN_00504a1c,(int)&PTR_FUN_00505868);
  if (cVar2 != '\0') {
    FUN_0040342c(param_1);
    *in_FS_OFFSET = in_stack_ffffffe4;
  }
  return param_1;
}

