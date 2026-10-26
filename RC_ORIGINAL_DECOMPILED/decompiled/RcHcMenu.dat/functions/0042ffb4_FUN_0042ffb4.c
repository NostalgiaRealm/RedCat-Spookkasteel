/*
 * FUN_0042ffb4 at 0042ffb4
 * undefined __register FUN_0042ffb4(int param_1, int * param_2)
 * Address ranges: 0042ffb4-0042ffdc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042ffb4(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  FUN_0042fdd8(param_1,(int)param_2);
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0042daf0);
  if ((char)uVar1 != '\0') {
    *(int *)(param_1 + 0x38) = param_2[0xe];
  }
  return;
}

