/*
 * FUN_00561068 at 00561068
 * undefined __register FUN_00561068(int * param_1)
 * Address ranges: 00561068-00561138
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00561068(int *param_1)

{
  char cVar1;
  
  FUN_005536f8();
  FUN_0054ffdc(*(int **)(*(int *)PTR_DAT_00572108 + 0x108));
  FUN_00569c6c(*(int *)PTR_DAT_00572108,(undefined4 *)"RCMn5");
  FUN_0056a9e4(*(int *)PTR_DAT_00572108);
  cVar1 = (**(code **)(*(int *)param_1[0xc5] + 0xb8))();
  if (cVar1 == '\x01') {
    if (*(char *)(*(int *)(*(int *)PTR_DAT_00572108 + 0x118) + 0x14) == '\x01') {
      (**(code **)(*param_1 + 0xe4))(param_1,&PTR_FUN_0055cf98);
    }
    else {
      (**(code **)(*param_1 + 0xe4))(param_1,&PTR_FUN_0055c204);
    }
  }
  else {
    cVar1 = (**(code **)(*(int *)param_1[0xc6] + 0xb8))();
    if (cVar1 == '\x01') {
      (**(code **)(*param_1 + 0xe4))(param_1,&PTR_FUN_0055da9c);
    }
    else {
      (**(code **)(*param_1 + 0xe4))(param_1,&PTR_FUN_0055e7a8);
    }
  }
  return;
}

