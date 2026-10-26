/*
 * FUN_00619027 at 00619027
 * undefined FUN_00619027(void)
 * Address ranges: 00619027-0061908b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00619027(undefined4 param_1,double param_2)

{
  uint uVar1;
  float10 fVar2;
  undefined4 uVar3;
  
  uVar1 = FUN_0061d892(param_2,param_1,param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_2);
    if ((double)fVar2 == param_2) {
      fVar2 = (float10)__frnd();
      if (fVar2 == (float10)(param_2 / 2.0)) {
        uVar3 = 2;
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
  }
  return 0;
}

