/*
 * FUN_004355c8 at 004355c8
 * undefined __register FUN_004355c8(int param_1, int * param_2)
 * Address ranges: 004355c8-0043560f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004355c8(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042ebec);
  if ((char)uVar1 == '\0') {
    FUN_004311e8((int *)(param_1 + 0x134),(int)param_2);
  }
  else {
    FUN_004311e8((int *)(param_1 + 0x16c),(int)param_2);
    FUN_004311e8((int *)(param_1 + 0x180),(int)param_2);
  }
  param_2[9] = 0;
  return;
}

