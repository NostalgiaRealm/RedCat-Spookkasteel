/*
 * FUN_0044441c at 0044441c
 * undefined4 __register FUN_0044441c(int * param_1)
 * Address ranges: 0044441c-0044448f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044441c(int *param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  piVar2 = (int *)FUN_00444360((int)param_1);
  if (piVar2 == (int *)0x0) {
    if ((*(byte *)(param_1 + 8) & 0x10) == 0) {
      uVar3 = FUN_0040320c(param_1,(int)&PTR_FUN_004404a0);
      if ((char)uVar3 != '\0') {
        FUN_004434c4(param_1[10]);
      }
    }
  }
  else {
    if ((*(byte *)(piVar2 + 8) & 0x10) == 0) {
      FUN_004434c4((int)piVar2);
    }
    (**(code **)(*piVar2 + 0x40))();
    uVar4 = FUN_00443b08((int)piVar2,'\0');
    cVar1 = FUN_00443fd8((int)piVar2,'\0');
    if ((char)uVar4 != '\0' || cVar1 != '\0') {
      FUN_004415b8(piVar2);
    }
    uVar4 = CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  return uVar4;
}

