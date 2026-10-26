/*
 * FUN_00404364 at 00404364
 * undefined __register FUN_00404364(int * param_1, uint param_2)
 * Address ranges: 00404364-004043c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00404364(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iStack_10;
  
  puVar3 = (undefined4 *)0x0;
  if (param_2 != 0) {
    iStack_10 = *param_1;
    if ((iStack_10 != 0) && (*(int *)(iStack_10 + -8) == 1)) {
      iStack_10 = iStack_10 + -8;
      FUN_00402818(&iStack_10,param_2 + 9);
      *param_1 = iStack_10 + 8;
      *(uint *)(iStack_10 + 4) = param_2;
      *(undefined1 *)(iStack_10 + 8 + param_2) = 0;
      return;
    }
    iStack_10 = 0x4043a1;
    puVar3 = FUN_00403e74(param_2);
    puVar1 = (undefined4 *)*param_1;
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[-1];
      if ((int)param_2 <= (int)puVar1[-1]) {
        uVar2 = param_2;
      }
      iStack_10 = 0x4043b9;
      FUN_00402944(puVar1,puVar3,uVar2);
    }
  }
  iStack_10 = 0x4043c0;
  FUN_00403db0(param_1);
  *param_1 = (int)puVar3;
  return;
}

