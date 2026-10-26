/*
 * FUN_004320c4 at 004320c4
 * undefined __register FUN_004320c4(int * param_1, int param_2, int * param_3)
 * Address ranges: 004320c4-00432118
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004320c4(int *param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_0042ebec);
  if ((char)uVar1 == '\0') {
    FUN_00432b50((int)param_1,*(char *)((int)param_1 + 0x47),'\0');
  }
  if (param_2 == param_1[9]) {
    FUN_0043213c(param_1,param_3);
  }
  else {
    FUN_004337a4((int)param_1,param_3);
  }
  if ((param_2 == 0) || (param_2 == -1)) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}

