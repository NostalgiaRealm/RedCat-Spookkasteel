/*
 * FUN_0054294c at 0054294c
 * undefined __register FUN_0054294c(int param_1, int * param_2)
 * Address ranges: 0054294c-005429e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054294c(int param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined4 local_14;
  int *local_10;
  int *local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  if (*(short *)(param_1 + 0x272) == 0) {
    puVar5 = &local_14;
    ppiVar4 = &local_10;
    piVar3 = (int *)FUN_00549b80(*(int *)(*(int *)(param_1 + 0x280) + 0x214));
    FUN_00494e38(piVar3,(byte *)(*(int *)(local_8 + 0x27c) + 0x208),'\x01',ppiVar4,puVar5);
    cVar1 = (**(code **)(*local_10 + 0x4c))();
    if (cVar1 == '\0') {
      FUN_00403db0(local_c);
    }
    else {
      FUN_00496b88(local_10,local_c);
    }
  }
  else {
    uVar2 = FUN_00549b80(*(int *)(*(int *)(param_1 + 0x280) + 0x214));
    (**(code **)(local_8 + 0x270))(*(undefined4 *)(local_8 + 0x274),uVar2,local_c);
  }
  return;
}

