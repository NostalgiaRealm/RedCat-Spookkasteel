/*
 * FUN_005c85f0 at 005c85f0
 * undefined FUN_005c85f0(void)
 * Address ranges: 005c85f0-005c86b9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005c85f0(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_4;
  
  puVar5 = param_2;
  piVar1 = param_1;
  if (((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) && (param_3 != (undefined4 *)0x0))
  {
    puVar7 = param_3;
    iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,0,param_3,&param_2);
    if (-1 < iVar2) {
      puVar4 = &local_4;
      for (uVar3 = (uint)&param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar4 = 0;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      puVar4 = puVar5;
      puVar6 = &local_4;
      for (uVar3 = (uint)&param_1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      if (&param_3 != (undefined4 **)0x0) {
        puVar5 = (undefined4 *)((int)&param_1 + (int)puVar5);
        puVar4 = puVar7;
        for (uVar3 = (uint)&param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar4 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined1 *)puVar4 = *(undefined1 *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar4 = (undefined4 *)((int)puVar4 + 1);
        }
      }
      (**(code **)(*piVar1 + 0x4c))(piVar1,&local_4,&param_1,puVar7,&param_3);
      return 1;
    }
  }
  return 0;
}

