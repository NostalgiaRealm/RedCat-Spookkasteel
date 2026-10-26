/*
 * FUN_004590b0 at 004590b0
 * undefined FUN_004590b0(void)
 * Address ranges: 004590b0-004591ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_004590b0(int param_1,int param_2,float *param_3,float *param_4,undefined4 param_5,
            undefined1 param_6)

{
  undefined4 uVar1;
  
  if ((((param_2 != *(int *)(param_1 + 0x450)) && (4 < param_2)) && (param_2 < 0xc)) ||
     ((param_2 == 7 &&
      ((((*(float *)(param_1 + 0x464) != *param_3 || (*(float *)(param_1 + 0x468) != param_3[1])) ||
        ((*(float *)(param_1 + 0x46c) != param_3[2] ||
         ((*(float *)(param_1 + 0x470) != *param_4 || (*(float *)(param_1 + 0x474) != param_4[1]))))
        )) || (*(float *)(param_1 + 0x478) != param_4[2])))))) {
    *(int *)(param_1 + 0x44c) = *(int *)(param_1 + 0x450);
    *(int *)(param_1 + 0x450) = param_2;
    *(undefined1 *)(param_1 + 0x454) = 1;
    *(float *)(param_1 + 0x464) = *param_3;
    *(float *)(param_1 + 0x468) = param_3[1];
    *(float *)(param_1 + 0x46c) = param_3[2];
    *(float *)(param_1 + 0x470) = *param_4;
    *(float *)(param_1 + 0x474) = param_4[1];
    *(float *)(param_1 + 0x478) = param_4[2];
    uVar1 = __ftol();
    *(undefined4 *)(param_1 + 0x50c) = uVar1;
    *(undefined1 *)(param_1 + 0x47c) = param_6;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined1 *)(param_1 + 0x484) = 0;
  }
  return;
}

