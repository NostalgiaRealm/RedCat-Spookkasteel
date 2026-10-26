/*
 * FUN_004eebd8 at 004eebd8
 * undefined __register FUN_004eebd8(uint param_1, int param_2)
 * Address ranges: 004eebd8-004eee0d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004eebd8(uint param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined1 *puVar5;
  
  puVar5 = &stack0xfffffffc;
  if (param_2 == 0) {
    FUN_00403d94("Assertion failure");
  }
  piVar4 = (int *)(param_1 + 0x2c);
  iVar1 = *piVar4;
  *piVar4 = *piVar4 + 1;
  if (SCARRY4(iVar1,1)) {
    thunk_FUN_00402874(param_1);
  }
  FUN_004ee6d4(param_1);
  uVar3 = FUN_004cf1d0(*(int **)(param_1 + 0xc));
  uVar3 = FUN_004cf3c8(*(int **)(param_1 + 0xc),(byte)uVar3 ^ 1);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  FUN_004d6910(*(int **)(param_1 + 0x20),1);
  uVar3 = FUN_004cf3c8(*(int **)(param_1 + 0xc),
                       *(char *)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x18));
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  FUN_004d6910(*(int **)(param_1 + 0x24),0);
  FUN_004eea90(*(int **)(param_1 + 0x20),extraout_EDX,extraout_ECX,(int)&stack0xfffffffc);
  FUN_004eea90(*(int **)(param_1 + 0x24),extraout_EDX_00,puVar5,(int)&stack0xfffffffc);
  uVar3 = FUN_0040320c(*(int **)(*(int *)(param_1 + 0xc) + 4),(int)&PTR_FUN_004bcac4);
  if ((char)uVar3 == '\0') {
    uVar3 = FUN_0040320c(*(int **)(*(int *)(param_1 + 0xc) + 4),(int)&PTR_FUN_004ea32c);
    if ((char)uVar3 == '\0') {
      uVar3 = FUN_0040320c(*(int **)(*(int *)(param_1 + 0xc) + 4),(int)&PTR_FUN_004e9cf4);
      if ((char)uVar3 == '\0') {
        FUN_00403d94("Unknown database type");
      }
      else {
        piVar4 = (int *)FUN_004ed794(param_1);
        FUN_004d5dc0(piVar4);
        piVar4 = (int *)FUN_004ed810(param_1);
        FUN_004d5dc0(piVar4);
      }
    }
    else {
      piVar4 = (int *)FUN_004ed794(param_1);
      (**(code **)(*piVar4 + 0x40))();
      piVar4 = (int *)FUN_004ed794(param_1);
      FUN_004d5dc0(piVar4);
      piVar4 = (int *)FUN_004ed810(param_1);
      (**(code **)(*piVar4 + 0x40))();
      piVar4 = (int *)FUN_004ed810(param_1);
      FUN_004d5dc0(piVar4);
    }
  }
  else {
    piVar4 = (int *)FUN_004ed794(param_1);
    FUN_004d5dc0(piVar4);
    piVar4 = (int *)FUN_004ed810(param_1);
    FUN_004d5dc0(piVar4);
  }
  piVar4 = (int *)FUN_004ed794(param_1);
  cVar2 = (**(code **)(*piVar4 + 0x3c))();
  if (cVar2 == '\0') {
    FUN_00403094(*(int **)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined1 *)(param_1 + 0x35) = 0;
  }
  else {
    piVar4 = (int *)FUN_004ed810(param_1);
    cVar2 = (**(code **)(*piVar4 + 0x3c))();
    if (cVar2 == '\0') {
      FUN_00403094(*(int **)(param_1 + 0x24));
      *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x35) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x35) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  if (*(char *)(param_1 + 0x35) == '\0') {
    piVar4 = (int *)FUN_004ed810(param_1);
    cVar2 = (**(code **)(*piVar4 + 0x3c))();
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x30) = 0x80000000;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  else {
    piVar4 = (int *)FUN_004ed794(param_1);
    uVar3 = (**(code **)(*piVar4 + 0x40))();
    *(undefined4 *)(param_1 + 0x30) = uVar3;
  }
  return;
}

