/*
 * FUN_004f5ac4 at 004f5ac4
 * undefined __register FUN_004f5ac4(int * param_1, int * param_2)
 * Address ranges: 004f5ac4-004f5af4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f5ac4(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00434b64(param_1,param_2);
  piVar1 = (int *)param_2[0xb];
  uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_004f304c);
  if ((char)uVar2 != '\0') {
    FUN_004f5b20(param_1,piVar1);
  }
  return;
}

