/*
 * FUN_004591b0 at 004591b0
 * undefined FUN_004591b0(void)
 * Address ranges: 004591b0-00459269
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004591b0(int param_1,int param_2,float *param_3,int param_4,undefined4 param_5,
            undefined1 param_6)

{
  float fVar1;
  undefined4 uVar2;
  
  if ((((param_2 != *(int *)(param_1 + 0x450)) && (4 < param_2)) && (param_2 < 0xc)) ||
     ((param_2 == 8 &&
      (((*(float *)(param_1 + 0x464) != *param_3 || (*(float *)(param_1 + 0x468) != param_3[1])) ||
       ((*(float *)(param_1 + 0x46c) != param_3[2] || (*(int *)(param_1 + 0x480) != param_4))))))))
  {
    *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x450);
    *(int *)(param_1 + 0x450) = param_2;
    *(undefined1 *)(param_1 + 0x454) = 1;
    *(float *)(param_1 + 0x464) = *param_3;
    *(float *)(param_1 + 0x468) = param_3[1];
    fVar1 = param_3[2];
    *(int *)(param_1 + 0x480) = param_4;
    *(undefined1 *)(param_1 + 0x484) = 0;
    *(float *)(param_1 + 0x46c) = fVar1;
    uVar2 = __ftol();
    *(undefined4 *)(param_1 + 0x50c) = uVar2;
    *(undefined1 *)(param_1 + 0x47c) = param_6;
  }
  return;
}

