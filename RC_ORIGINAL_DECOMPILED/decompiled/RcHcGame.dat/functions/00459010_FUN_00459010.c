/*
 * FUN_00459010 at 00459010
 * undefined FUN_00459010(void)
 * Address ranges: 00459010-004590a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00459010(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x450);
  if ((((param_2 != iVar1) && (4 < param_2)) && (param_2 < 0xc)) ||
     ((param_2 == 6 &&
      (((*(float *)(param_1 + 0x458) != param_3 || (*(float *)(param_1 + 0x45c) != param_4)) ||
       (*(float *)(param_1 + 0x460) != param_5)))))) {
    *(int *)(param_1 + 0x450) = param_2;
    *(float *)(param_1 + 0x458) = param_3;
    *(int *)(param_1 + 0x44c) = iVar1;
    *(float *)(param_1 + 0x460) = param_5;
    *(undefined1 *)(param_1 + 0x454) = 1;
    *(float *)(param_1 + 0x45c) = param_4;
    *(undefined4 *)(param_1 + 0x480) = 0;
    *(undefined1 *)(param_1 + 0x484) = 0;
  }
  return;
}

