/*
 * FUN_0051b0f4 at 0051b0f4
 * undefined __register FUN_0051b0f4(int param_1, undefined4 param_2)
 * Address ranges: 0051b0f4-0051b1aa
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051b0f4(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int local_1c [4];
  undefined4 local_c;
  int local_8;
  
  local_c = param_2;
  local_8 = param_1;
  iVar2 = FUN_0042a950(*(int **)(param_1 + 0x2f4));
  if ((iVar2 != 0) && (*(int *)(local_8 + 0x350) != 0)) {
    cVar1 = (**(code **)(**(int **)(local_8 + 0x314) + 0xb4))();
    if (cVar1 == '\0') {
      cVar1 = '\x01';
      iVar2 = 1;
      (**(code **)(**(int **)(local_8 + 0x32c) + 0x40))(*(int **)(local_8 + 0x32c),local_1c);
      FUN_00522d50(*(int **)(local_8 + 0x350),*(int **)(*(int *)(local_8 + 0x32c) + 0x120),local_1c,
                   iVar2,cVar1);
    }
    else {
      cVar1 = '\0';
      iVar2 = 1;
      (**(code **)(**(int **)(local_8 + 0x32c) + 0x40))(*(int **)(local_8 + 0x32c),local_1c);
      FUN_00522d50(*(int **)(local_8 + 0x350),*(int **)(*(int *)(local_8 + 0x32c) + 0x120),local_1c,
                   iVar2,cVar1);
    }
  }
  return;
}

