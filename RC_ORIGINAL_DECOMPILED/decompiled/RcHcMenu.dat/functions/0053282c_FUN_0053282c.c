/*
 * FUN_0053282c at 0053282c
 * undefined __register FUN_0053282c(int param_1, int * param_2)
 * Address ranges: 0053282c-005328da
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053282c(int param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    piVar2 = (int *)FUN_00403224(*(int **)(param_1 + 4),(int)&PTR_FUN_00531b0c);
    uVar3 = (**(code **)(*piVar2 + 0x140))();
    *(undefined4 *)(param_1 + 0xc) = uVar3;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    FUN_00403d94("Assertion failure");
  }
  if (param_2 == (int *)0x0) {
    FUN_00494398(*(int **)(param_1 + 0xc));
    *(undefined1 *)(param_1 + 8) = 1;
    FUN_00501180(param_1);
  }
  else {
    cVar1 = FUN_00494528(*(int **)(param_1 + 0xc),param_2);
    if ((cVar1 == '\0') || (*(char *)(param_1 + 8) != '\0')) {
      FUN_00493768(*(int **)(param_1 + 0xc),param_2);
      *(undefined1 *)(param_1 + 8) = 0;
      FUN_00501180(param_1);
    }
  }
  return;
}

