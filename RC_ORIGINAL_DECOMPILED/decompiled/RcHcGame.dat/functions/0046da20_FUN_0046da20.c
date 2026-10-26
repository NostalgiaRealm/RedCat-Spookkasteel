/*
 * FUN_0046da20 at 0046da20
 * undefined FUN_0046da20(void)
 * Address ranges: 0046da20-0046da87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_0046da20(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined1 local_c [12];
  
  if ((param_2 != (int *)0x0) &&
     ((*(char *)(param_1 + 400) == '\0' || (param_2 != *(int **)(param_1 + 0x194))))) {
    *(undefined1 *)(param_1 + 400) = 1;
    *(int **)(param_1 + 0x194) = param_2;
    puVar1 = (undefined4 *)(**(code **)(*param_2 + 0x48))(local_c);
    *(undefined4 *)(param_1 + 0x198) = *puVar1;
    *(undefined4 *)(param_1 + 0x19c) = puVar1[1];
    *(undefined4 *)(param_1 + 0x1a0) = puVar1[2];
    FUN_00502350(1);
    return 1;
  }
  return 0;
}

