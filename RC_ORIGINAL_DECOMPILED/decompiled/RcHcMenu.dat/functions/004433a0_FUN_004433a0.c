/*
 * FUN_004433a0 at 004433a0
 * undefined __register FUN_004433a0(int * param_1, undefined4 param_2, undefined4 param_3, char param_4)
 * Address ranges: 004433a0-004433f6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004433a0(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  if ((param_4 != '\0') && ((param_1[10] != 0 || (param_1[0x18] != 0)))) {
    FUN_004415b8(param_1);
  }
  if ((int *)param_1[0x16] == (int *)0x0) {
    piVar1 = (int *)param_1[1];
    uVar2 = FUN_0040320c(piVar1,(int)&PTR_FUN_004401c8);
    if ((char)uVar2 != '\0') {
      FUN_00444f34(piVar1);
    }
  }
  else {
    FUN_004433a0((int *)param_1[0x16],param_1,param_3,'\0');
  }
  return;
}

