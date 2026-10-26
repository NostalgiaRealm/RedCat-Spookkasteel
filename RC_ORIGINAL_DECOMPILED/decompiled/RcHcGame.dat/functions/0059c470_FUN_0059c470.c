/*
 * FUN_0059c470 at 0059c470
 * undefined FUN_0059c470(void)
 * Address ranges: 0059c470-0059c517
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_0059c470(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  float10 fVar3;
  undefined1 *puVar4;
  undefined1 local_c [12];
  
  puVar4 = local_c;
  puVar2 = (undefined4 *)(**(code **)(**(int **)(param_2 + 0x360) + 0x48))(puVar4);
  (**(code **)**(undefined4 **)(param_1 + 0x1c))(puVar4,*puVar2,puVar2[1],puVar2[2]);
  cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  while (cVar1 != '\0') {
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
    FUN_00597fb0();
    fVar3 = (float10)FUN_005b30a0();
    if (fVar3 < (float10)2000.0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))();
      FUN_00598680();
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    cVar1 = (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  }
  return;
}

