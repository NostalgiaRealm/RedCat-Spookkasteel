/*
 * FUN_1000e540 at 1000e540
 * undefined FUN_1000e540(void)
 * Address ranges: 1000e540-1000e5c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_1000e540(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int local_4;
  
  piVar1 = (int *)FUN_1000ed40();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_1000c3f0(param_1);
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_10002b50(param_1,&local_4);
      piVar1[5] = iVar2;
      if (iVar2 == -1) {
        (*DAT_1014e358)(s_CreateOutsidePortal__Could_not_c_10038d50);
        return (int *)0x0;
      }
      uVar3 = DAT_10312ffc;
      if (local_4 == 0) {
        uVar3 = param_2;
        param_2 = DAT_10312ffc;
      }
      iVar2 = FUN_1000eca0(piVar1,uVar3,param_2);
      if (iVar2 != 0) {
        return piVar1;
      }
    }
  }
  return (int *)0x0;
}

