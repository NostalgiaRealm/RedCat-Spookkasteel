/*
 * FUN_00600416 at 00600416
 * undefined FUN_00600416(void)
 * Address ranges: 00600416-0060045e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00600416(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_0060e6d3();
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)*puVar1;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)puVar1[1];
  uVar2 = FUN_00600a7c(puVar1[2],0);
  *(undefined4 *)(param_1 + 8) = uVar2;
  uVar2 = FUN_00600a7c(s_false_0068d2d0,0);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_00600a7c(&DAT_006b0fa0,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}

