/*
 * FUN_006150ae at 006150ae
 * undefined FUN_006150ae(void)
 * Address ranges: 006150ae-006150e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_006150ae(int *param_1)

{
  uint uVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  uVar1 = FUN_0061503c();
  if ((uVar1 == 0) && (param_1 = (int *)*param_1, param_1 != (int *)0x0)) {
    do {
      uVar1 = (**(code **)*param_1)();
      if (uVar1 != 0) {
        piVar2 = param_1;
      }
      param_1 = (int *)param_1[1];
    } while (param_1 != (int *)0x0);
    if (piVar2 != (int *)0x0) {
      uVar1 = (**(code **)(*piVar2 + 4))();
      return uVar1;
    }
  }
  return uVar1 & 0xffffff00;
}

