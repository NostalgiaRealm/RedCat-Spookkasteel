/*
 * FUN_00469330 at 00469330
 * undefined FUN_00469330(void)
 * Address ranges: 00469330-004693c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __thiscall FUN_00469330(int param_1,undefined4 param_2,float *param_3)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar2;
  undefined4 uVar1;
  float fVar3;
  float10 fVar4;
  
  if (*(char *)(param_1 + 0x108) == '\0') {
    fVar4 = (float10)FUN_00409e30(param_2);
    fVar4 = (float10)*param_3 - fVar4 * (float10)700.0;
    uVar2 = extraout_var_00;
  }
  else {
    fVar4 = (float10)FUN_00409e30(param_2);
    fVar4 = fVar4 * (float10)700.0 + (float10)*param_3;
    uVar2 = extraout_var;
  }
  *param_3 = (float)fVar4;
  fVar3 = *param_3;
  uVar1 = CONCAT22(uVar2,(ushort)(fVar3 < 255.0) << 8 | (ushort)NAN(fVar3) << 10 |
                         (ushort)(fVar3 == 255.0) << 0xe);
  if (fVar3 < 255.0 == 0 && (fVar3 == 255.0) == 0) {
    fVar3 = 255.0;
  }
  else {
    fVar3 = *param_3;
    uVar1 = CONCAT22(uVar2,(ushort)(fVar3 < 20.0) << 8 | (ushort)NAN(fVar3) << 10 |
                           (ushort)(fVar3 == 20.0) << 0xe);
    if (fVar3 >= 20.0) {
      return uVar1;
    }
    fVar3 = 20.0;
  }
  *param_3 = fVar3;
  *(bool *)(param_1 + 0x108) = *(char *)(param_1 + 0x108) == '\0';
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

