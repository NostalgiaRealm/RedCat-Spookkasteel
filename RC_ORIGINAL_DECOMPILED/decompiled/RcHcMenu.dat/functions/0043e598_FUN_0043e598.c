/*
 * FUN_0043e598 at 0043e598
 * undefined __register FUN_0043e598(int param_1, int * param_2, int * param_3)
 * Address ranges: 0043e598-0043e5e8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043e598(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  
  FUN_0043f17c(param_1,param_2);
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x44) + 0x60))();
  }
  else {
    uVar1 = FUN_004214f4((int)param_2);
    if ((char)uVar1 == '\x01') {
      (**(code **)(*param_2 + 0x60))();
    }
    else {
      (**(code **)(*param_3 + 8))(param_3,param_2);
      (**(code **)(*param_3 + 0x68))(param_3,1);
      (**(code **)(*param_3 + 0x60))();
    }
  }
  return;
}

