/*
 * FUN_0042dbe0 at 0042dbe0
 * undefined FUN_0042dbe0(void)
 * Address ranges: 0042dbe0-0042dc23
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0042dbe0(int param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  
  while (param_3 != param_4) {
    piVar1 = (int *)*param_3;
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    FUN_005fe5f0(param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
    param_3 = piVar1;
  }
  *param_2 = param_3;
  return;
}

