/*
 * FUN_0043d8f8 at 0043d8f8
 * undefined __register FUN_0043d8f8(int param_1, int * param_2, char param_3)
 * Address ranges: 0043d8f8-0043d93e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043d8f8(int param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  
  FUN_0041922c(param_1,(int)param_2,param_3);
  if (param_3 == '\x01') {
    if (param_2 == *(int **)(param_1 + 0x2c)) {
      FUN_0043d8b8(param_1,0);
    }
    else {
      uVar1 = FUN_0040320c(param_2,(int)&LAB_0043d1d4);
      if ((char)uVar1 != '\0') {
        FUN_0043d960(param_1,(int)param_2);
      }
    }
  }
  return;
}

