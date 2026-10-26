/*
 * FUN_0059c520 at 0059c520
 * undefined FUN_0059c520(void)
 * Address ranges: 0059c520-0059c55c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0059c520(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  (**(code **)**(undefined4 **)(param_1 + 0x1c))();
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  while (cVar1 != '\0') {
    uVar2 = 0xffffffff;
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(0xffffffff);
    FUN_005995e0(uVar2);
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  }
  return;
}

