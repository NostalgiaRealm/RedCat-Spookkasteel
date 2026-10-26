/*
 * FUN_0040407c at 0040407c
 * undefined __register FUN_0040407c(int * param_1, undefined4 * param_2, undefined4 * param_3)
 * Address ranges: 0040407c-004040ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040407c(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    FUN_00403e04(param_1,param_3);
    return;
  }
  if (param_3 == (undefined4 *)0x0) {
    if (param_2 != (undefined4 *)0x0) {
      if ((uint)param_2[-2] < 0x80000000) {
        LOCK();
        param_2[-2] = param_2[-2] + 1;
        UNLOCK();
      }
      else {
        puVar3 = FUN_00403e74(param_2[-1]);
        FUN_00402944(param_2,puVar3,param_2[-1]);
        param_2 = puVar3;
      }
    }
    LOCK();
    iVar2 = *param_1;
    *param_1 = (int)param_2;
    UNLOCK();
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + -8))) {
      LOCK();
      piVar1 = (int *)(iVar2 + -8);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        FUN_00402800(iVar2 + -8);
      }
    }
    return;
  }
  if (param_2 == (undefined4 *)*param_1) {
    FUN_00404038(param_1,param_3);
    return;
  }
  if (param_3 != (undefined4 *)*param_1) {
    FUN_00403e04(param_1,param_2);
    FUN_00404038(param_1,param_3);
    return;
  }
  puVar3 = FUN_00403e74(param_2[-1] + param_3[-1]);
  FUN_00402944(param_2,puVar3,param_2[-1]);
  FUN_00402944(param_3,(undefined4 *)((int)puVar3 + param_2[-1]),param_3[-1]);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[-2] = puVar3[-2] + -1;
  }
  FUN_00403e04(param_1,puVar3);
  return;
}

