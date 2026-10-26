/*
 * FUN_0042a228 at 0042a228
 * undefined __register FUN_0042a228(int * param_1, int * param_2)
 * Address ranges: 0042a228-0042a28b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042a228(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00429918(param_1,param_2);
  uVar1 = FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  param_2[1] = *(uint *)(&DAT_0056f6e4 + (uint)*(byte *)(param_1 + 0x83) * 4 + (uVar1 & 0x7f) * 0xc)
               | param_2[1] & ~*(uint *)(&DAT_0056f70c + (uint)*(byte *)((int)param_1 + 0x20e) * 4)
                 | 4 | *(uint *)(&DAT_0056f6fc + (uint)*(byte *)((int)param_1 + 0x20d) * 4);
  return;
}

