/*
 * FUN_00526d38 at 00526d38
 * undefined __register FUN_00526d38(int * param_1, char param_2)
 * Address ranges: 00526d38-00526d82
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00526d38(int *param_1,char param_2)

{
  int *piVar1;
  
  if ((char)param_1[0x10] != param_2) {
    *(char *)(param_1 + 0x10) = param_2;
    piVar1 = (int *)FUN_00526c0c(param_1);
    FUN_0051f14c(piVar1,(int)param_1);
    piVar1 = (int *)FUN_00526c0c(param_1);
    piVar1 = (int *)FUN_00527214(piVar1);
    piVar1 = (int *)FUN_005285b8(piVar1);
    (**(code **)(*piVar1 + 0x74))();
  }
  return;
}

