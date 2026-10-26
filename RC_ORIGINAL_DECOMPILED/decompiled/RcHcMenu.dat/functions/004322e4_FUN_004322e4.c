/*
 * FUN_004322e4 at 004322e4
 * undefined __register FUN_004322e4(int * param_1, undefined4 param_2)
 * Address ranges: 004322e4-00432311
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004322e4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[9]) {
    uVar1 = FUN_0040320c(param_1,(int)&PTR_FUN_00446c28);
    if ((char)uVar1 != '\0') {
      FUN_0044c6b8((int)param_1,param_2);
    }
  }
  return;
}

