/*
 * FUN_0053d4cc at 0053d4cc
 * undefined __register FUN_0053d4cc(int param_1)
 * Address ranges: 0053d4cc-0053d57e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053d4cc(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int local_10;
  int local_c;
  
  if (*(int *)(param_1 + 0x88) == 0) {
    FUN_00403d94("Assertion failure");
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    FUN_00403d94("Assertion failure");
  }
  iVar2 = FUN_0045ba40(*(int *)(param_1 + 0x20));
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_10 = uVar3 + 1;
    local_c = 0;
    do {
      piVar4 = (int *)(**(code **)**(undefined4 **)(param_1 + 0x20))
                                (*(undefined4 **)(param_1 + 0x20),local_c);
      iVar2 = FUN_00403224(piVar4,(int)&DAT_0053b648);
      FUN_0053ddb8(iVar2);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  cVar1 = (**(code **)(**(int **)(param_1 + 0x88) + 0x38))();
  if (cVar1 != '\0') {
    FUN_004d516c(*(int **)(param_1 + 0x88));
  }
  return;
}

