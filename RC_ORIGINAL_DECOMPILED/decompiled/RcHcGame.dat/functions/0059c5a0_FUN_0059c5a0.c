/*
 * FUN_0059c5a0 at 0059c5a0
 * undefined FUN_0059c5a0(void)
 * Address ranges: 0059c5a0-0059c62f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0059c5a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = operator_new(0x10);
  iVar4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    *puVar2 = &PTR_FUN_0064ef1c;
    puVar2[1] = iVar3;
    puVar2[3] = 0;
    puVar2[2] = *(undefined4 *)(iVar3 + 4);
  }
  FUN_0059c560();
  (**(code **)**(undefined4 **)(param_1 + 0x1c))();
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  while (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
    iVar3 = FUN_005995c0();
    if (iVar3 == -1) {
      iVar3 = iVar4;
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(iVar4);
      FUN_00599470(iVar3);
      iVar4 = iVar4 + 1;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  }
  FUN_005fe5f0(puVar2);
  return;
}

