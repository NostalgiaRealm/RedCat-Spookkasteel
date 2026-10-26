/*
 * FUN_00604370 at 00604370
 * undefined FUN_00604370(void)
 * Address ranges: 00604370-006043cc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00604370(int param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)FUN_0060e6d3();
  uVar1 = FUN_0060a03a((int)*(char *)*puVar2);
  *(undefined2 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_0060a03a((int)*(char *)puVar2[1]);
  *(undefined2 *)(param_1 + 0xe) = uVar1;
  uVar3 = FUN_00600a7c(puVar2[2],0);
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar3 = FUN_006068bd(s_false_0068d2d0,0);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  uVar3 = FUN_006068bd(&DAT_006b0fa0,0);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}

