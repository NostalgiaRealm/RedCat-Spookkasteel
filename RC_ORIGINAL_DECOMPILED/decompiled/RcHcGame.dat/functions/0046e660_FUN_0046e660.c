/*
 * FUN_0046e660 at 0046e660
 * undefined FUN_0046e660(void)
 * Address ranges: 0046e660-0046e6bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0046e660(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x7c) != '\0') {
    if (*(char *)(param_1 + 0x168) == '\0') {
      FUN_00502350(0);
      return;
    }
    piVar2 = (int *)(param_1 + 0xfc);
    iVar1 = 0xf;
    do {
      (**(code **)(*piVar2 + 4))(param_2,param_3);
      piVar2 = piVar2 + 0x51;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    FUN_0046f000(param_2,param_3);
  }
  return;
}

