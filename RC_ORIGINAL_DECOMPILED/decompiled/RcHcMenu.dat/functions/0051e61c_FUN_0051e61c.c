/*
 * FUN_0051e61c at 0051e61c
 * undefined __register FUN_0051e61c(int * param_1, int * param_2)
 * Address ranges: 0051e61c-0051e700
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051e61c(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = FUN_0040320c(param_2,(int)&PTR_FUN_0043fcd8);
  if ((char)uVar1 != '\0') {
    iVar2 = FUN_00403224(param_2,(int)&PTR_FUN_0043fcd8);
    iVar2 = FUN_0051e404(param_1,*(uint *)(iVar2 + 0xc));
    if (param_2 == (int *)param_1[0x89]) {
      FUN_0051cd84(iVar2);
    }
    else if (param_2 == (int *)param_1[0x8a]) {
      FUN_0051ce2c(iVar2);
    }
    else if (param_2 == (int *)param_1[0x8c]) {
      FUN_0051ced4(iVar2,'\0');
      piVar3 = (int *)FUN_0051e1b8(param_1);
      (**(code **)(*piVar3 + 0x74))();
    }
    else if (param_2 == (int *)param_1[0x8d]) {
      FUN_0051c90c(iVar2,*(byte *)(iVar2 + 8) ^ 1);
      piVar3 = (int *)FUN_0051e1b8(param_1);
      (**(code **)(*piVar3 + 0x74))();
    }
    else if (param_2 == (int *)param_1[0x8f]) {
      piVar3 = (int *)FUN_0051e1b8(param_1);
      FUN_00521934(piVar3);
    }
  }
  return;
}

