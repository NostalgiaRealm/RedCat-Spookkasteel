/*
 * FUN_00435f34 at 00435f34
 * undefined __register FUN_00435f34(int * param_1)
 * Address ranges: 00435f34-00435f71
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435f34(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = param_1;
  while (piVar1 = (int *)piVar3[9], piVar1 != (int *)0x0) {
    piVar3 = piVar1;
    if ((char)piVar1[0x5a] == '\0') {
      return;
    }
  }
  uVar2 = FUN_0040320c(piVar3,(int)&PTR_FUN_00446c28);
  if (((char)uVar2 == '\0') && (piVar3[0x59] == 0)) {
    return;
  }
  FUN_00435e38(param_1);
  return;
}

