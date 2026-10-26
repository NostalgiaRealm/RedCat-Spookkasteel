/*
 * FUN_00459968 at 00459968
 * undefined __register FUN_00459968(int * param_1)
 * Address ranges: 00459968-004599d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00459968(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int local_10;
  int local_c;
  
  if (param_1 == (int *)0x0) {
    FUN_00403d94("FreeObjectsInStrings: [aStrings] cannot be nil");
  }
  iVar1 = (**(code **)(*param_1 + 0x14))();
  uVar2 = iVar1 - 1;
  if (SBORROW4(iVar1,1)) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  if (-1 < (int)uVar2) {
    local_10 = uVar2 + 1;
    local_c = 0;
    do {
      piVar3 = (int *)(**(code **)(*param_1 + 0x18))(param_1,local_c);
      FUN_00403094(piVar3);
      (**(code **)(*param_1 + 0x24))(param_1,local_c,0);
      local_c = local_c + 1;
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return;
}

