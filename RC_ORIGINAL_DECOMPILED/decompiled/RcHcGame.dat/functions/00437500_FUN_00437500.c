/*
 * FUN_00437500 at 00437500
 * undefined FUN_00437500(void)
 * Address ranges: 00437500-00437565
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __thiscall FUN_00437500(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_004de3a0(param_2);
  param_1[5] = *(undefined4 *)(param_2 + 0x14);
  param_1[6] = *(undefined4 *)(param_2 + 0x18);
  param_1[7] = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x20);
  *(undefined1 *)((int)param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)((int)param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)((int)param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 0x24);
  param_1[10] = *(undefined4 *)(param_2 + 0x28);
  param_1[0xb] = *(undefined4 *)(param_2 + 0x2c);
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *param_1 = &PTR_FUN_0064c5b0;
  param_1[0xc] = uVar1;
  return param_1;
}

